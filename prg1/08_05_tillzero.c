//
//  08_05_tillzero.c
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
        zandaka = zandaka - x;
        printf("残高 : %d\n", zandaka);
    }
    return 0;
}
