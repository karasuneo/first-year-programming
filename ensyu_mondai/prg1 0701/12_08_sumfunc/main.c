//
//  main.c
//  12_08_sumfunc
//
//  Created by k21116kk on 2021/07/01.
//

#include <stdio.h>
int sumfunc(int n){
    int s = 0;
    for (int i = 1; i <= n; i++){
        s += i;
    }
    return (s);
}
int main(int argc, const char * argv[]) {
    int n, sum;
    printf("整数を入力してください\n");
    printf("n? ");
    scanf("%d", &n);
    sum = sumfunc(n);
    printf("1から%dまでの和は %d です\n",n, sum);
    return 0;
}
