//
//  main.c
//  prog4
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
int main(void){
    int num1=10, num2=5;
    printf("%d, %d\n", num1, num2);
    swap(&num1, &num2);
    printf("%d, %d\n", num1, num2);
    return 0;
}
