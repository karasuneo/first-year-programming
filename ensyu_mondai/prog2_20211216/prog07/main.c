//
//  main.c
//  prog07
//
//  Created by k21116kk on 2021/12/16.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define MAX 256


typedef struct iris {
    double sepal_length;
    double sepal_width;
    double petal_length;
    double petal_width;
    char class[20];
} Iris;

int getrand(int i) {
    int num=rand()%(i+1);
    return  num;
}

void swap(Iris a[], int i, int j) {
    Iris tmp=a[i];
    a[i]=a[j];
    a[j]=tmp;
}

void shuffle (Iris a[], int n) {
    for (int i=n-1; i>=1; i--) {
        swap(a, i, getrand(i));
    }
}

double dist(Iris i1, Iris i2) {
    double dist=pow(i1.petal_length-i2.petal_length, 2)+pow(i1.petal_width-i2.petal_width, 2)+pow(i1.sepal_length-i2.sepal_length, 2)+pow(i1.sepal_width-i2.sepal_width, 2);
    return dist;
}

Iris get1NN(Iris iris, Iris array[], int num) {
    double minDist=100000000000;
    int minindex=-1;
    for (int i=0; i<num; i++) {
        double d=dist(iris, array[i]);
        if (minDist>d) {
            minDist=d;
            minindex=i;
        }
    }
    return array[minindex];
}

void printIris(Iris iris) {
    printf("%.1lf, %.1lf, %.1lf, %.1lf, %s \n", iris.sepal_length, iris.sepal_width, iris.petal_length, iris.petal_width, iris.class);
}

int main(int argc, const char * argv[]) {
    srand((unsigned)time(NULL));
    int num=0;
    Iris array_all[150], array_learn[120], array_test[30];
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
        
        array_all[num]=iris;
        
        num++;
    }
    
    
    shuffle(array_all, num);
    int count_learn=0;
    int count_test=0;
    double count_true=0;
    while (count_learn<120) {
        array_learn[count_learn] = array_all[count_learn];
        count_learn++;
    }
    while (count_test<30) {
        array_test[count_test] = array_all[120+count_test];
        count_test++;
    }
    
    for (int i=0; i<120; i++) {
        printIris(array_learn[i]);
    }
    printf("\n");
    for (int i=0; i<30; i++) {
        printIris(array_test[i]);
    }
    for (int i=0; i<30; i++) {
        Iris iris=array_test[i];
        Iris nnIris=get1NN(iris, array_learn, 120);
        printf("実際の種類 : %s　指定された種類 : %s\n", iris.class, nnIris.class);
        if (strcmp(iris.class, nnIris.class)==0) {
            count_true++;
        }
    }
    printf("正解率 : %lf\n", (count_true/30.0));
    return 0;
}
