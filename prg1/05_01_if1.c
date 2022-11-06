//
//  05_01_if1.c
//  
//
//  Created by k21116kk on 2021/05/13.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int a;
    printf("a? ");
    scanf("%d", &a);
    if(a>0)
    {
    printf("aは正の値です\n計算終了");
    }
    if(a<=0)
    {
        printf("計算終了");
    }
    return 0;
}
