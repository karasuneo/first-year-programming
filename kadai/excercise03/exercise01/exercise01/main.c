//
//  main.c
//  exercise01
//
//  Created by k21116kk on 2021/10/28.
//

#include <stdio.h>

#include <stdio.h>

void swap(int *ponum1, int *ponum2) {
    int tmp;
    tmp = *ponum1;
    *ponum1 = *ponum2;
    *ponum2 = tmp;
}
void sort(int *ponum1, int *ponum2) {
    if (*ponum2 < *ponum1) {
        swap(ponum1, ponum2);
    }
}
void bubble(int array[], int size){
    for (int i=0; i<size-1; i++) {
        for (int j=0; j<size-i-1; j++) {
            sort(&array[j], &array[j+1]);
        }
    }
}
int main(void){
    int array[] = {-99, 33, 19, 98, 88};
    const int size = sizeof(array) / sizeof(array[0]);
    bubble(array, size);
    for (int k=0; k<size; k++) {
        printf("%d\n", array[k]);
    }
    return 0;
}
