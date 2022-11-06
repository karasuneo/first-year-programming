//
//  main.c
//  prog09
//
//  Created by k21116kk on 2021/11/29.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define MAX 256

typedef struct iris {
    double sepal_length;
    double sepal_width;
    double petal_length;
    double petal_width;
    char class[20];
} Iris;
void printIris(Iris iris) {
    printf("%.1lf, %.1lf, %.1lf, %.1lf, %s \n", iris.sepal_length, iris.sepal_width, iris.petal_length, iris.petal_width, iris.class);
}
int main(int argc, const char * argv[]) {
    int num=0;
    Iris array[200];
    FILE *fp;
    char line[MAX];
    fp=fopen("iris.data", "r");
    if (fp==NULL) {
        printf("Cannot open the file \n");
        exit(0);
    }
    while (fgets(line, MAX, fp) != NULL) {
        Iris iris;
        char *value=strtok(line, ",\n");
        iris.sepal_length=atof(value);
        value=strtok(NULL, ",\n");
        iris.sepal_width=atof(value);
        value=strtok(NULL, ",\n");
        iris.petal_length=atof(value);
        value=strtok(NULL, ",\n");
        iris.petal_width=atof(value);
        value=strtok(NULL, ",\n");
        strcpy(iris.class, value);
        
        array[num]=iris;
        
        num++;
    }
    fclose(fp);
    
    
    Iris i1={5.7, 4.0, 1.2, 0.2, ""};
    Iris i2={5.9, 2.9, 4.2, 1.5, ""};
    Iris i3={5.6, 2.8, 4.8, 2.0, ""};
    int close_num1;
    int close_num2;
    int close_num3;
    double i1_min = 10000;
    double i2_min = 10000;
    double i3_min = 10000;
    
    for (int i=0; i<150; i++) {
        Iris iris = array[i];
        double edis1 = sqrt((iris.sepal_length-i1.sepal_length)*(iris.sepal_length-i1.sepal_length)+(iris.sepal_width-i1.sepal_width)*(iris.sepal_width-i1.sepal_width)+(iris.petal_length-i1.petal_length)*(iris.petal_length-i1.petal_length)+(iris.petal_width-i1.petal_width)*(iris.petal_width-i1.petal_width));
        if (i1_min > edis1) {
            i1_min = edis1;
            close_num1 = i;
        }
        double edis2 = sqrt((iris.sepal_length-i2.sepal_length)*(iris.sepal_length-i2.sepal_length)+(iris.sepal_width-i2.sepal_width)*(iris.sepal_width-i2.sepal_width)+(iris.petal_length-i2.petal_length)*(iris.petal_length-i2.petal_length)+(iris.petal_width-i2.petal_width)*(iris.petal_width-i2.petal_width));
        if (i2_min > edis2) {
            i2_min = edis2;
            close_num2 = i;
        }
        double edis3 = sqrt((iris.sepal_length-i3.sepal_length)*(iris.sepal_length-i3.sepal_length)+(iris.sepal_width-i3.sepal_width)*(iris.sepal_width-i3.sepal_width)+(iris.petal_length-i3.petal_length)*(iris.petal_length-i3.petal_length)+(iris.petal_width-i3.petal_width)*(iris.petal_width-i3.petal_width));
        if (i3_min > edis3) {
            i3_min = edis3;
            close_num3 = i;
        }
    }
    printf("i1 と一番近いサンプル : ");
    printIris(array[close_num1]);
    printf("i2 と一番近いサンプル : ");
    printIris(array[close_num2]);
    printf("i3 と一番近いサンプル : ");
    printIris(array[close_num3]);
    return 0;
}
