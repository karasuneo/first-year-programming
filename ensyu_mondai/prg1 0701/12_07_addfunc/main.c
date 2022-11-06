//
//  main.c
//  12_07_addfunc
//
//  Created by k21116kk on 2021/07/01.
//

#include <stdio.h>
int addof(int x, int y){
    int s;
    s = x + y;
    return (s);
}
int main(int argc, const char * argv[]) {
    int a, b, sum;
    printf("2つの整数を入力してください\n");
    printf("a? b? ");
    scanf("%d%d", &a, &b);
    sum = addof(a, b);
    printf ("和は %d です。\n", sum);
    return 0;
}
