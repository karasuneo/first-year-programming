//
//  06_04_calcFor.c
//  
//
//  Created by k21116kk on 2021/05/20.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int i, sum;
    sum = 0;
    for(i=1; i <= 10; i++){
        sum = sum+i;
    }
    printf("1〜10までの和は %d です。", sum);
    return 0;
}
