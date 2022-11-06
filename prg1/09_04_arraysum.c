//
//  09_04_arraysum.c
//  
//
//  Created by k21116kk on 2021/06/10.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int a[] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int sum, n, i;
    n =  10;
    sum = 0;
    for(i = 0; i < n; i++){
        sum += a[i];
    }
    printf("SUM = %d\n", sum);
    return 0;
}
