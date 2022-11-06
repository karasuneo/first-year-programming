//
//  main.c
//  rensyu
//
//  Created by k21116kk on 2021/11/11.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a=2;
    int *p=&a;
    int *tmp=&p;
    printf("%p\n", &a);
    printf("%p\n", p);
    printf("%p\n", *p);
    printf("%p\n", &p);
    printf("%p\n", &*p);
    printf("%d\n", a);
    printf("%d\n", *p);
    printf("%p\n", &tmp);
    return 0;
}
