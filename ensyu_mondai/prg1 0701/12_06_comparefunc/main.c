//
//  main.c
//  12_06_comparefunc
//
//  Created by k21116kk on 2021/07/01.
//

#include <stdio.h>
int maxof(int x, int y){
    int m;
    if (x > y) {
        m = x;
    }else {
        m = y;
        }
    return (m);
}
int main(int argc, const char * argv[]) {
    int a, b, max;
    printf("2つの整数を入力してください\n");
    printf("a? b? ");
    scanf("%d%d", &a, &b);
    max = maxof(a, b);
    printf ("大きい方の値は %d です。\n", max);
    return 0;
}
