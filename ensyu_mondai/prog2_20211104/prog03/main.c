//
//  main.c
//  prog03
//
//  Created by k21116kk on 2021/11/04.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char a[][5]={"LISP", "C", "Ada"};
    char *p[]={"PAUL", "X", "MAC"};
    const int size1 = sizeof (a) / sizeof (a[0]);
    const int size2 = sizeof (p) / sizeof (p[0]);
    for (int i=0; i<size1; i++) {
        printf("a[%d] = %s \n", i, a[i]);
    }
    for (int j=0; j<size2; j++) {
        printf("*p[%d] = %s \n", j, p[j]);
        
    }
    return 0;
}
