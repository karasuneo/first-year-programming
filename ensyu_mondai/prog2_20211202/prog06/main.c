//
//  main.c
//  prog06
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
    
    int count[9];
    for (int i=0; i<9; i++) {
        count[i] = 0;
    }
    for (int i=0; i<num; i++) {
        if (array[i].intencity == '1') {
            count[0]++;
        }
        if (array[i].intencity == '2') {
            count[1]++;
        }
        if (array[i].intencity == '3') {
            count[2]++;
        }
        if (array[i].intencity == '4') {
            count[3]++;
        }
        if (array[i].intencity == '7') {
            count[4]++;
        }
        if (array[i].intencity == 'A') {
            count[5]++;
        }
        if (array[i].intencity == 'B') {
            count[6]++;
        }
        if (array[i].intencity == 'C') {
            count[7]++;
        }
        if (array[i].intencity == 'D') {
            count[8]++;
        }
    }
    for (int i=0; i<9; i++) {
        if (i == 0) {
            printf("震度１ : %d\n", count[i]);
        }
        if (i == 1) {
            printf("震度２ : %d\n", count[i]);
        }
        if (i == 2) {
            printf("震度３ : %d\n", count[i]);
        }
        if (i == 3) {
            printf("震度４ : %d\n", count[i]);
        }
        if (i == 4) {
            printf("震度７ : %d\n", count[i]);
        }
        if (i == 5) {
            printf("震度A : %d\n", count[i]);
        }
        if (i == 6) {
            printf("震度B : %d\n", count[i]);
        }
        if (i == 7) {
            printf("震度C : %d\n", count[i]);
        }
        if (i == 8) {
            printf("震度D : %d\n", count[i]);
        }
    }
    return 0;
}
