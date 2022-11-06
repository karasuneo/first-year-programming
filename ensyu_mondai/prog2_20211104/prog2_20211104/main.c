//
//  main.c
//  prog2_20211104
//
//  Created by k21116kk on 2021/11/04.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a;
    int *pa=&a;
    printf("%p \n", &a);
    printf("%p \n", pa);
    printf("%p \n", &pa);
    printf("%p \n", &*pa);
    return 0;
}
