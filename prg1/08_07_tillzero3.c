//
//  08_07_tillzero3.c
//  
//
//  Created by k21116kk on 2021/06/03.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int x, zandaka;
    zandaka = 1000;
    while(zandaka>0){
        printf("x? ");
        scanf("%d", &x);
        if(x==0){
            printf("取引終了");
            break;
        }else if(x<0){
            printf("無効です\n");
            continue;
        }
        zandaka = zandaka - x;
        printf("残高 : %d\n", zandaka);
    }
    return 0;
}
