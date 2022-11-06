//
//  05_03_ifelse1.c
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
    if(a >= 0){
        printf("aの値は正の値もしくは0です\n計算終了");
    }else {
        printf("aは負の値です");
    }
    return 0;
}
