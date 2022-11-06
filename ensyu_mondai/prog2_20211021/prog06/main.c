//
//  main.c
//  prog06
//
//  Created by k21116kk on 2021/10/21.
//

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
void sort3(int *ponum1, int *ponum2, int *ponum3) {
    sort(ponum1, ponum2);
    sort(ponum2, ponum3);
    sort(ponum1, ponum2);
}
int main(void){
    int num1=3, num2=9, num3=4;
    printf("%d, %d, %d\n", num1, num2, num3);
    sort3(&num1, &num2, &num3);
    printf("%d, %d, %d\n", num1, num2, num3);
    return 0;
}
