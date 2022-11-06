//
//  10_01_arraysum.c
//  
//
//  Created by k21116kk on 2021/06/17.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int a[5], sum;
    sum = 0;
    for(int i = 0; i < 5; i++){
        a[i] = i * 2 + 2;
    }
    for(int j = 0; j < 5; j++){
        sum += a[j];
    }
    printf("合計 = %d", sum);
    return 0;
}
