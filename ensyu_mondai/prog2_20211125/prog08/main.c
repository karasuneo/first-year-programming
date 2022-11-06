//
//  main.c
//  prog08
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
    Iris i1={5.7, 4.0, 1.2, 0.2, ""};
    Iris i2={5.9, 2.9, 4.2, 1.5, ""};
    Iris i3={5.6, 2.8, 4.8, 2.0, ""};
    double min = 10000;
    double edis1_setosa = sqrt((setosa.sepal_length-i1.sepal_length)*(setosa.sepal_length-i1.sepal_length)+(setosa.sepal_width-i1.sepal_width)*(setosa.sepal_width-i1.sepal_width)+(setosa.petal_length-i1.petal_length)*(setosa.petal_length-i1.petal_length)+(setosa.petal_width-i1.petal_width)*(setosa.petal_width-i1.petal_width));
    double edis1_versicolor = sqrt((versicolor.sepal_length-i1.sepal_length)*(versicolor.sepal_length-i1.sepal_length)+(versicolor.sepal_width-i1.sepal_width)*(versicolor.sepal_width-i1.sepal_width)+(versicolor.petal_length-i1.petal_length)*(versicolor.petal_length-i1.petal_length)+(versicolor.petal_width-i1.petal_width)*(versicolor.petal_width-i1.petal_width));
    double edis1_virginica = sqrt((virginica.sepal_length-i1.sepal_length)*(virginica.sepal_length-i1.sepal_length)+(virginica.sepal_width-i1.sepal_width)*(virginica.sepal_width-i1.sepal_width)+(virginica.petal_length-i1.petal_length)*(virginica.petal_length-i1.petal_length)+(virginica.petal_width-i1.petal_width)*(virginica.petal_width-i1.petal_width));
    if (min > edis1_setosa) {
        min = edis1_setosa;
        strcpy(i1.class, "Iris-setosa");
    }
    if (min > edis1_versicolor) {
        min = edis1_versicolor;
        strcpy(i1.class, "Iris-versicolor");
    }
    if (min > edis1_virginica) {
        min = edis1_virginica;
        strcpy(i1.class, "Iris-virginica");
    }
    min = 10000;
    
    double edis2_setosa = sqrt((setosa.sepal_length-i2.sepal_length)*(setosa.sepal_length-i2.sepal_length)+(setosa.sepal_width-i2.sepal_width)*(setosa.sepal_width-i2.sepal_width)+(setosa.petal_length-i2.petal_length)*(setosa.petal_length-i2.petal_length)+(setosa.petal_width-i2.petal_width)*(setosa.petal_width-i2.petal_width));
    double edis2_versicolor = sqrt((versicolor.sepal_length-i2.sepal_length)*(versicolor.sepal_length-i2.sepal_length)+(versicolor.sepal_width-i2.sepal_width)*(versicolor.sepal_width-i2.sepal_width)+(versicolor.petal_length-i2.petal_length)*(versicolor.petal_length-i2.petal_length)+(versicolor.petal_width-i2.petal_width)*(versicolor.petal_width-i2.petal_width));
    double edis2_virginica = sqrt((virginica.sepal_length-i2.sepal_length)*(virginica.sepal_length-i2.sepal_length)+(virginica.sepal_width-i2.sepal_width)*(virginica.sepal_width-i2.sepal_width)+(virginica.petal_length-i2.petal_length)*(virginica.petal_length-i2.petal_length)+(virginica.petal_width-i2.petal_width)*(virginica.petal_width-i2.petal_width));
    if (min > edis2_setosa) {
        min = edis2_setosa;
        strcpy(i2.class, "Iris-setosa");
    }
    if (min > edis2_versicolor) {
        min = edis2_versicolor;
        strcpy(i2.class, "Iris-versicolor");
    }
    if (min > edis2_virginica) {
        min = edis2_virginica;
        strcpy(i2.class, "Iris-virginica");
    }
    min = 10000;
    
    double edis3_setosa = sqrt((setosa.sepal_length-i3.sepal_length)*(setosa.sepal_length-i3.sepal_length)+(setosa.sepal_width-i3.sepal_width)*(setosa.sepal_width-i3.sepal_width)+(setosa.petal_length-i3.petal_length)*(setosa.petal_length-i3.petal_length)+(setosa.petal_width-i3.petal_width)*(setosa.petal_width-i3.petal_width));
    double edis3_versicolor = sqrt((versicolor.sepal_length-i3.sepal_length)*(versicolor.sepal_length-i3.sepal_length)+(versicolor.sepal_width-i3.sepal_width)*(versicolor.sepal_width-i3.sepal_width)+(versicolor.petal_length-i3.petal_length)*(versicolor.petal_length-i3.petal_length)+(versicolor.petal_width-i3.petal_width)*(versicolor.petal_width-i3.petal_width));
    double edis3_virginica = sqrt((virginica.sepal_length-i3.sepal_length)*(virginica.sepal_length-i3.sepal_length)+(virginica.sepal_width-i3.sepal_width)*(virginica.sepal_width-i3.sepal_width)+(virginica.petal_length-i3.petal_length)*(virginica.petal_length-i3.petal_length)+(virginica.petal_width-i3.petal_width)*(virginica.petal_width-i3.petal_width));
    if (min > edis3_setosa) {
        min = edis3_setosa;
        strcpy(i3.class, "Iris-setosa");
    }
    if (min > edis3_versicolor) {
        min = edis3_versicolor;
        strcpy(i3.class, "Iris-versicolor");
    }
    if (min > edis3_virginica) {
        min = edis3_virginica;
        strcpy(i3.class, "Iris-virginica");
    }
    printf("i1 が属しているクラス : ");
    printIris(i1);
    printf("i2 が属しているクラス : ");
    printIris(i2);
    printf("i3 が属しているクラス : ");
    printIris(i3);
    return 0;
}
