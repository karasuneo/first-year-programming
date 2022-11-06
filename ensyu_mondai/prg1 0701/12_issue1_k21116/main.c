//
//  main.c
//  12_issue1_k21116
//
//  Created by k21116kk on 2021/07/01.
//

#include <stdio.h>
int profunc(int n){
    int p = 1;
    for (int i = n; i > 0; i--){
        p *= i;
    }
    return (p);
}
int main(int argc, const char * argv[]) {
    int n, pro;
    printf("整数を入力してください\n");
    printf("n? ");
    scanf("%d", &n);
    pro = profunc(n);
    printf("%dの階乗は %d です\n", n, pro);
    return 0;
}
