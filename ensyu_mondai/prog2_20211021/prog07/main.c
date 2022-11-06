//
//  main.c
//  prog07
//
//  Created by k21116kk on 2021/10/21.
//

#include <stdio.h>

int main(void){
    int a;
    int *px = &a;
    printf("%p\n", &a);
    printf("%p\n", &px);
    return 0;
}
