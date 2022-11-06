//
//  main.c
//  12_05_compare
//
//  Created by k21116kk on 2021/07/01.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a, b, max;
    printf("二つの整数を入力してください ");
    scanf("%d%d", &a, &b);
    if (a>b) {
        max = a;
    }else {
        max = b;
            
        }
    printf ("大きい方の値は %d です。\n", max);
    return 0;
}
