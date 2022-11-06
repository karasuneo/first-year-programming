//
//  main.c
//  prog02
//
//  Created by k21116kk on 2021/12/02.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct earthquake {
    int year;
    int month;
    int date;
    double lon;
    double lat;
    char intencity;
} QUAKE;

void printeq(QUAKE eq) {
    printf("年 : %d\n月 : %d\n日 : %d\n緯度 : %lf\n経度 : %lf\n震度 : %c\n", eq.year, eq.month, eq.date, eq.lon, eq.lat, eq.intencity);
}

int main(int argc, const char * argv[]) {
    char line[]="2011,1,1,36.657500,140.973500,3\n";
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
    quake.intencity = value[0];
    
    printeq(quake);
    
    return 0;
}
