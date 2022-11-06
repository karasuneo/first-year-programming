//
//  main.c
//  prog07
//
//  Created by k21116kk on 2021/12/02.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define MAX 256

typedef struct earthquake {
    int year;
    int month;
    int date;
    double lon;
    double lat;
    char intencity;
} QUAKE;

void printeq(QUAKE eq) {
    printf("%d, %d, %d, %lf, %lf, %c\n", eq.year, eq.month, eq.date, eq.lon, eq.lat, eq.intencity);
}

int main(int argc, const char * argv[]) {
    int num = 0;
    FILE *fp;
    char line[MAX];
    QUAKE array[10624];
    
    fp=fopen("h2011_eq.csv","r");
    if(fp==NULL){
        printf("Cannot open the file.\n");
        exit(0);
    }
    while(fgets(line,MAX,fp)!=NULL){
        QUAKE quake;
        char *value=strtok(line, ",\n");
        quake.year =atoi(value);
        value=strtok(NULL, ",\n");
        quake.month =atoi(value);
        value=strtok(NULL, ",\n");
        quake.date=atoi(value);
        value=strtok(NULL, ",\n");
        quake.lon=atof(value);
        value=strtok(NULL, ",\n");
        quake.lat=atof(value);
        value=strtok(NULL, ",\n");
        quake.intencity=value[0];
        
        array[num] = quake;
        num++;
    }
    fclose(fp);
    
    
    int count[365];
    int sum=0;
    double ave=0;
    double stdiv=0;
    double dif=0;
    int index = -1;
    QUAKE prequake = {2010,12,31,0.0,0.0,'0'};
    
    for (int i=0; i<365; i++) {
        count[i] = 0;
    }
    for (int i=0; i<num; i++) {
        if (prequake.month!=array[i].month || prequake.date!=array[i].date) {
            index++;
        }
        count[index]++;
        prequake=array[i];
    }
    for (int i=0; i<365; i++) {
        sum+=count[i];
    }
    ave = sum/365;
    for (int i=0; i<365; i++) {
        dif += (ave-count[i])*(ave-count[i]);
    }
    stdiv = sqrt(dif/365);
    printf("平均 : %lf \n", ave);
    printf("標準偏差 : %lf \n", stdiv);

    return 0;
}
