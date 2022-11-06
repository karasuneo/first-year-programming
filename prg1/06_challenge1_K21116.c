//
//  06_challenge1_K21116.c
//  
//
//  Created by k21116kk on 2021/05/20.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int i, x, y;
    y = 0;
    printf("x? ");
    scanf("%d", &x);
    for(i=2; i<=x-1; ++i){
            if(x%i==0){
                y = 1;
            }
    }
    if(x==1){
        printf("%dは素数ではありません", x);
    }else if(y==0){
        printf("%dは素数です", x);
    }else {
        printf("%dは素数ではありません", x);
    }
    return 0;
}
