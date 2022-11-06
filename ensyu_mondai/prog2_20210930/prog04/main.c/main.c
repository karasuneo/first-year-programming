//
//  main.c
//  prog04/main.c
//
//  Created by k21116kk on 2021/09/30.
//

#include <stdio.h>
int main(int argc, const char * argv[]) {
    int suzi;
    printf("数字を入力してください ");
    scanf("%d", &suzi);
    
    for (int i = 1; i <= suzi; i++) {
        printf("hoge");
        if (i%3 == 0) {
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}

