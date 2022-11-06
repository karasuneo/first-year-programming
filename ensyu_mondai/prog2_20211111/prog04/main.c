//
//  main.c
//  prog04
//
//  Created by k21116kk on 2021/11/11.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char str[10000];
    printf("文字列を入力してください ");
    scanf("%s", str);
    printf("input : %s\n", str);
    for(int i=0; i<=strlen(str); i++){
        if(str[i]>=97 && str[i]<=122)
            str[i] = str[i]-32;
    }
    printf("output : %s\n", str);
    return 0;
}
