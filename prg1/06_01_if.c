//
//  06_01_if.c
//  
//
//  Created by k21116kk on 2021/05/20.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int a;
    printf("a? ");
    scanf("%d", &a);
    if(a > 0){
    printf("aは正の値です");
    }else if(a == 0){
        printf("aは0です");
    }else {
        printf("aは負の値です");
    }
    return 0;
}
