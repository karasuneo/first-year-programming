//
//  main.c
//  prog04
//
//  Created by k21116kk on 2021/11/04.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    char *str="abcdqaz";
    size_t len;
    len = strlen(str);
    for (int i=0; i<len; i++) {
        char a = str[i];
        printf("%c \n", a);
    }
    return 0;
}
