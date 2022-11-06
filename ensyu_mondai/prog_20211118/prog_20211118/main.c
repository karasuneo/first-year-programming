//
//  main.c
//  prog_20211118
//
//  Created by k21116kk on 2021/11/15.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char *p;
    p = (char*)malloc(5*sizeof(char));
    printf("%p \n", p);
    p = "hoge";
    printf("%s \n", p);
    printf("%p \n", p);
    return 0;
}
