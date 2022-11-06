//
//  05_02_if2.c
//  
//
//  Created by k21116kk on 2021/05/13.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int a, b;
    printf("a? ");
    scanf("%d", &a);
    printf("b? ");
    scanf("%d", &b);
    if(a == b)
    {
    printf("aとbの値は等しいです\n計算終了");
    }
    if(a != b)
    {
        printf("計算終了");
    }
    return 0;
}
