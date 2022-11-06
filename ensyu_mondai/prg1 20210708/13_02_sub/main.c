//
//  main.c
//  13_02_sub
//
//  Created by k21116kk on 2021/07/08.
//

#include <stdio.h>
int subof (int c, int d) {
    int x = c - d;
    return (x);
}
int main(int argc, const char * argv[]) {
    int a, b, dif;
    printf("a,bに整数を代入してください ");
    scanf("%d %d", &a, &b);
    dif = subof(a, b);
    printf("%d - %d = %d\n", a, b, dif);
    return 0;
}
