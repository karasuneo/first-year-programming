//
//  main.c
//  11_04_dispstr2
//
//  Created by k21116kk on 2021/06/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char array[11];
    printf("10文字以内の文字列を入力してください ");
    scanf("%s", array);
    for(int i = 0; array[i]!='\0'; i++){
    printf("%c", array[i]);
    }
    printf("\n");
    return 0;
}
