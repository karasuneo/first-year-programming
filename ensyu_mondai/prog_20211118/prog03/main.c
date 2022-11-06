//
//  main.c
//  prog03
//
//  Created by k21116kk on 2021/11/15.
//

#include <stdio.h>
#include<stdlib.h>

int main(int argc, const char * argv[]) {
    int *p;
    p = (int*)malloc(4*sizeof(int));
    
    if ((p = (int*)malloc(4*sizeof(int))) == NULL) {
        printf("No enough memory. \n");
        exit(1);
    }
    
    for (int i=0; i<4; i++) {
        p[i] = i;
        printf("p[%d] : %d \n", i, p[i]);
    }
    free(p);
    return 0;
}
