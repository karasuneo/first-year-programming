//
//  main.c
//  prog01
//
//  Created by k21116kk on 2021/11/04.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    size_t len1, len2, len3;
    char str1[128]="abc";
    char str2[]="cde";
    char *str="fgh";
    len1 = strlen(str1);
    len2 = strlen(str2);
    len3 = strlen(str);
    printf("size1 : %lu\n", sizeof (str1));
    printf("size2 : %lu\n", sizeof (str2));
    printf("size3 : %li\n", sizeof (str));
    printf("len1 : %lu\n", len1);
    printf("len2 : %lu\n", len2);
    printf("len3 : %lu\n", len3);
    return 0;
}
