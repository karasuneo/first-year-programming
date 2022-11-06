//
//  main.c
//  14_07_tillzero
//
//  Created by k21116kk on 2021/07/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int zandaka, x;
    x = 1;
    zandaka = 1000;
    while (x != 0) {
        printf("x? ");
        scanf("%d", &x);
        zandaka -= x;
        printf("残高 : %d\n", zandaka);
    }
    printf("取引終了\n");
    return 0;
}
