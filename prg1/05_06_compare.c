//
//  05_06_compare.c
//  
//
//  Created by k21116kk on 2021/05/13.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int a, b;
    printf("a? b?");
    scanf("%d %d", &a, &b);
    if(a > b)
    {
    printf("a > b");
    }else if(a < b){
    printf("a < b");
    }else {
        printf("a == b");
    }
    return 0;
}
