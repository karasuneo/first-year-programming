//
//  main.c
//  prog05
//
//  Created by k21116kk on 2021/12/02.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
    int count=0;
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
    
    for (int i=0; i<num; i++) {
        if ((array[i].month==3 && array[i].date>=11) || array[i].month>3) {
            if (array[i].intencity != '1' && array[i].intencity != '2' && array[i].intencity != '3') {
                count++;
            }
        }
    }
    printf("震度4以上の数 : %d\n", count);
    return 0;
}
