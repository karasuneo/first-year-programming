//
//  main.c
//  11_06_countA
//
//  Created by k21116kk on 2021/06/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int count = 0;
    char array[11];
    printf("10文字以下で文字列を入力してください\n");
    printf("input : ");
    scanf("%s", array);
    for(int i = 0; array[i] != '\0'; i++){
        if (array[i] == 'a') {
            count++;
        }
    }
    printf("aの数は %d です\n", count);
    return 0;
}
