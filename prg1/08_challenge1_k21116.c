//
//  08_challenge1_k21116.c
//  
//
//  Created by k21116kk on 2021/06/04.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int x, i;
    printf("2以上の正の整数をに入力してください\nx? ");
    scanf("%d", &x);
    printf("%d = ", x);
    if(x == 2){
        printf("%d", 2);
    }else if(x != 2){
        for(i = 2; i < x; i++){
            if(x%i == 0){
                printf("%d x ", i);
                x = x/i;
                i = 1;
                if(x == 2){
                    printf("%d", x);
                }
            }else if(i == (x-1)){
                printf("%d ", x);
            }
        }
    }
    return 0;
}
