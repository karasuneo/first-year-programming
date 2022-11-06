//
//  main.c
//  excercise01
//
//  Created by k21116kk on 2021/12/07.
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
    for (int i=0; i<num; i++) {
        printeq(array[i]);
    }
    return 0;
}
