//
//  main.c
//  prog06
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
    printf("\n sepal_length : %.1lf\n sepal_width : %.1lf\n petal_length : %.1lf\n petal_width : %.1lf\n \n", iris.sepal_length, iris.sepal_width, iris.petal_length, iris.petal_width);
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
    
    Iris setosa={0, 0, 0, 0, "iris-setosa"};
    Iris versicolor={0, 0, 0, 0, "iris-versicolor"};
    Iris virginica={0, 0, 0, 0, "iris-virginica"};
    int num_setosa=0;
    int num_versicolor=0;
    int num_virginica=0;
    for (int i=0; i<150; i++) {
        Iris iris=array[i];
        if (strcmp(iris.class, "Iris-setosa" ) == 0 ) {
            setosa.sepal_length+=iris.sepal_length;
            setosa.sepal_width+=iris.sepal_width;
            setosa.petal_length+=iris.petal_length;
            setosa.petal_width+=iris.petal_width;
            num_setosa++;
        }
        if (strcmp(iris.class, "Iris-versicolor" ) == 0 ) {
            versicolor.sepal_length+=iris.sepal_length;
            versicolor.sepal_width+=iris.sepal_width;
            versicolor.petal_length+=iris.petal_length;
            versicolor.petal_width+=iris.petal_width;
            num_versicolor++;
        }
        if (strcmp(iris.class, "Iris-virginica" ) == 0 ) {
            virginica.sepal_length+=iris.sepal_length;
            virginica.sepal_width+=iris.sepal_width;
            virginica.petal_length+=iris.petal_length;
            virginica.petal_width+=iris.petal_width;
            num_virginica++;
        }
    }
    setosa.sepal_length=setosa.sepal_length/num_setosa;
    setosa.sepal_width=setosa.sepal_width/num_setosa;
    setosa.petal_length=setosa.petal_length/num_setosa;
    setosa.petal_width=setosa.petal_width/num_setosa;

    versicolor.sepal_length=versicolor.sepal_length/num_versicolor;
    versicolor.sepal_width=versicolor.sepal_width/num_versicolor;
    versicolor.petal_length=versicolor.petal_length/num_versicolor;
    versicolor.petal_width=versicolor.petal_width/num_versicolor;
    
    virginica.sepal_length=virginica.sepal_length/num_virginica;
    virginica.sepal_width=virginica.sepal_width/num_virginica;
    virginica.petal_length=virginica.petal_length/num_virginica;
    virginica.petal_width=virginica.petal_width/num_virginica;
    
    printf("Iris-setosa(avg)");
    printIris(setosa);
    printf("Iris-versicolor(avg)");
    printIris(versicolor);
    printf("Iris-virginica(avg)");
    printIris(virginica);
    return 0;
}
