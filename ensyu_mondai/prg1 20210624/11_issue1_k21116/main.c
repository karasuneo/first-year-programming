//
//  main.c
//  11_issue1_k21116
//
//  Created by k21116kk on 2021/06/28.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int count = 0;
    int y = 0;
    char array[11], ch[11];
    printf("10文字以内の文字列を入力してください\n");
    printf("input : ");
    scanf("%s", array);
    for(int i = 0; array[i] != '\0'; i++){
        count++;
    }
    for (int j =  0; j < count; j++) {
        ch[j] = array[count - j - 1];
    }
    ch[count] = '\0';
    
    for (int k = 0; k < count; k++) {
        if (array[k] != ch[k]) {
            y = 1;
            break;
        }
    }
    if (y == 0) {
        printf("回文OK");
    }else {
        printf("回文NG");
    }
    printf("\n");
    return 0;
}
