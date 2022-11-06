//
//  main.c
//  11_04_dispstr2w
//
//  Created by k21116kk on 2021/06/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x = 0;
    char array[11];
    printf("10文字以内の文字列を入力してください ");
    scanf("%s", array);
    while (array[x]!='\0') {
        putchar(array[x]);
        x++;
    }
    printf("\n");
    return 0;
}
