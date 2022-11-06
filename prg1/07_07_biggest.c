//
//  07_07_biggest.c
//  
//
//  Created by k21116kk on 2021/05/27.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int i, max, x;
    max = 0;
    printf("5つの正の整数を入力してください\n");
    for(i=1; i<=5; i++){
        printf("%d? ", i);
        scanf("%d", &x);
        if(max<x){
            max = x;
        }
    }
    printf("5つの整数の中の最大値は%dです", max);
    return 0;
}

