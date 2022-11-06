//
//  main.c
//  prog05
//
//  Created by k21116kk on 2021/11/15.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int num;
    int *p;
    printf("num? ");
    scanf("%d", &num);
    
    p = (int*)malloc(num*sizeof(int));
    for (int i=0; i<num; i++) {
        printf("p[%d]? ", i);
        scanf("%d", &p[i]);
    }
    
    for (int j=0; j<num; j++) {
        printf("p[%d] : %d \n", j, p[num-j-1]);
    }
    free(p);
    return 0;
}
