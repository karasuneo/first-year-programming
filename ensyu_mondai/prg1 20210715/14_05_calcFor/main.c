//
//  main.c
//  14_05_calcFor
//
//  Created by k21116kk on 2021/07/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, sum;
    sum = 0;
    printf("n? ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("1から%dまでの和は%dです\n", n, sum);
    return 0;
}
