//
//  main.c
//  prog06
//
//  Created by k21116kk on 2021/11/04.
//

#include <stdio.h>
#include <string.h>

void my_strcpy(char *str1, char *str2) {
    for (int i=0; str2[i]!='\0'; i++) {
        str2[i] = str1[i];
    }
}
int main(int argc, const char * argv[]) {
    char a[128]="abc";
    char b[128];
    my_strcpy(a, b);
    printf("%s \n", b);
    return 0;
}
