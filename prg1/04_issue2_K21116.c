//
//  04_issue2_K21116.c
//  
//
//  Created by k21116kk on 2021/05/06.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int x;
    printf("x?");
    scanf("%d", &x);
    if(x%2==0)
    {
        printf("偶数です");
    }
    if(x%2==1)
    {
        printf("奇数です");
    }
    return 0;
}
