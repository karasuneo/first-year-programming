//
//  main.c
//  prog05
//
//  Created by k21116kk on 2021/11/25.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
    
    for (int i=0; i<150; i++) {
        printIris(array[i]);
    }
    return 0;
}
