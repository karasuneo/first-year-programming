//
//  05_04_ifelse2.c
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
    if(a >= b)
    {
    printf("aはb以上です");
    }else{
    printf("aはb未満です");
    }
    return 0;
}
