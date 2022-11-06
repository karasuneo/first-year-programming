//
//  05_07_ifand.c
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
    if(a>0 &&b>0)
    {
    printf("aとbは正です");
    }else {
    printf("aとbのどちらかは負もしくは0です");
    }
    return 0;
}
