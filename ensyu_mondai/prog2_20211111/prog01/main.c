//
//  main.c
//  prog01
//
//  Created by k21116kk on 2021/11/11.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char *str1="hoge";
    char *str2="hosage";
    if (strcmp(str1, str2) == 0) {
        printf("SAME\n");
    }else {
        printf("DIFF\n");
    }
    return 0;
}
