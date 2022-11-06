//
//  main.c
//  prog05
//
//  Created by k21116kk on 2021/12/16.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
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
    for (int i=n-1; i>0; i--) {
        swap(a, i, getrand(i));
    }
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
    return 0;
}
