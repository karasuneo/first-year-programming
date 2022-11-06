//
//  main.c
//  prog05
//
//  Created by k21116kk on 2021/11/04.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char a[128]="abc";
    char b[128];
    strcpy(b, a);
    printf("%s \n", b);
    return 0;
}
