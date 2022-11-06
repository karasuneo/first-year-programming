//
//  main.c
//  prog04
//
//  Created by k21116kk on 2021/10/28.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[5];
    int *p = a;
    for (int i=0; i<5; i++) {
        printf("%p\n", &*p+i);
    }
    for (int j=0; j<5; j++) {
        printf("%p\n", &a[j]);
    }
    return 0;
}
