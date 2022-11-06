//
//  main.c
//  prog06
//
//  Created by k21116kk on 2021/11/15.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    char *str1="ABCDE";
    char *str2="XYZ";
    char *str;
    size_t len1, len2;
    len1 = strlen(str1);
    len2 = strlen(str2);
    str = (char*)malloc((len1+len2)*sizeof(char));
    sprintf(str, "%s%s\n", str1, str2);
    printf("%s", str);
    free(str);
    return 0;
}
