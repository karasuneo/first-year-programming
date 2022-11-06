//
//  main.c
//  prog01
//
//  Created by k21116kk on 2021/10/28.
//

#include <stdio.h>

void swap(int *num1, int *num2){
    int tmp;
    tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
}
int main(int argc, const char * argv[]) {
    int num1, num2;
    printf("num1? ");
    scanf("%d", &num1);
    printf("num2? ");
    scanf("%d", &num2);
    swap(&num1, &num2);
    printf("num1:%d num2:%d\n", num1, num2);
    return 0;
}
