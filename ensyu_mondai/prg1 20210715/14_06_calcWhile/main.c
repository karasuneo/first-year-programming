//
//  main.c
//  14_06_calcWhile
//
//  Created by k21116kk on 2021/07/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, tmp, sum;
    sum = 0;
    printf("n? ");
    scanf("%d", &n);
    tmp = n;
    while (n > 0) {
        sum += n;
        n--;
    }
    printf("1から%dまでの和は%dです\n", tmp, sum);
    return 0;
}
