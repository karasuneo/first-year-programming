//
//  main.c
//  prog03/main.c
//
//  Created by k21116kk on 2021/09/30.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int suzi;
    printf("数字を入力してください ");
    scanf("%d", &suzi);
    
    for (int i = 0; i < suzi; i++) {
        printf("Hello, World!\n");
    }
    
    return 0;
}
