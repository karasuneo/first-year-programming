//
//  main.c
//  11_05_scan_rev
//
//  Created by k21116kk on 2021/06/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int count = 0;
    char array[11];
    printf("10文字以内の文字列を入力してください\n");
    printf("input : ");
    scanf("%s", array);
    while (array[count]!='\0') {
        count++;
    }
    for(int i = count; i >= 0; i--){
    printf("%c", array[i]);
    }
    printf("\n");
    return 0;
}
