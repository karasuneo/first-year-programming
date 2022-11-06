//
//  08_04_calcWhile.c
//  
//
//  Created by k21116kk on 2021/06/03.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int x, sum;
    sum = 0;
    x = 1;
    while(x!=0){
        printf("x? ");
        scanf("%d", &x);
        sum = sum + x;
        printf("sum : %d\n", sum);
    }
    printf("end");
    return 0;
}
