//
//  main.c
//  14_02_logical
//
//  Created by k21116kk on 2021/07/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x;
    printf("x? ");
    scanf("%d", &x);
    if (x%2 == 0 && x%3 != 0) {
        printf("2の倍数です\n");
    }
    if (x%2 != 0 && x%3 == 0) {
        printf("3の倍数です\n");
    }
    if (x%2 == 0 && x%3 == 0) {
        printf("2の倍数および3の倍数です\n");
    }
    if (x%2 != 0 && x%3 != 0) {
        printf("2の倍数および3の倍数ですはありません\n");
    }
    return 0;
}
