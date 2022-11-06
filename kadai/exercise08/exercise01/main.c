//
//  main.c
//  exercise01
//
//  Created by k21116kk on 2021/12/14.
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

void swap(double *ponum1, double *ponum2) {
    double tmp;
    tmp = *ponum1;
    *ponum1 = *ponum2;
    *ponum2 = tmp;
}
void sort(double *ponum1, double *ponum2) {
    if (*ponum2 < *ponum1) {
        swap(ponum1, ponum2);
    }
}
void bubble(QUAKE array[], int size){
    for (int i=0; i<size-1; i++) {
        for (int j=0; j<size-i-1; j++) {
            sort(&array[j].lat, &array[j+1].lat);
        }
    }
}
int main(int argc, const char * argv[]) {
    int num = 0;
    FILE *fp, *ofp;
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
    
    ofp=fopen("h2011_eq_sort_lat.csv","w");
    bubble(array, num);
    for (int i=0; i<num; i++) {
        QUAKE eq  = array[i];
        fprintf(ofp, "%d,%d,%d,%lf,%lf,%c\n", eq.year, eq.month, eq.date, eq.lon, eq.lat, eq.intencity);
    }
    fclose(ofp);
    
    int count[90]; //区間ごとの地震の回数を記憶する配列
    int count_num=0; //意図した緯度にcount[]を格納するための変数
    int count1=0; //最後うまくprintfするための変数
    int count2=0; //最後うまくprintfするための変数
    for (int i=0; i<90; i++) {
        count[i]=0;
    }
    for (int i=0; i+2<=180; i+=2) {
        for (int j=0; j<num; j++) {
            if (array[j].lat>=i && array[j].lat<i+2) {
                count[count_num]++;
            }
        }
        count_num++;
    }
    while (count1<90) {
        printf("緯度 %d 〜 %d の地震の回数は %d です\n",count2, count2+2, count[count1]);
        count1++;
        count2+=2;
    }
    return 0;
}
