//
//  main.c
//  prog04
//
//  Created by k21116kk on 2021/11/15.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char *p;
    p = (char*)malloc(5*sizeof(char));
    
    if ((p = (char*)malloc(5*sizeof(char))) == NULL) {
        printf("No enough memory.¥n");
        exit(1);
    }

    strcpy(p, "hoge");
    printf("%s \n", p);
    free(p);
    return 0;
}
