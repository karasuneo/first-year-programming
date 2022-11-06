//
//  05_05_ifelseif1.c
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
    if(a > 0){
        printf("aの値は正の値です\n計算終了");
    }else if(a ==0 ){
        printf("aは0です");
    }else {
        printf("aは負の値です");
    }
    return 0;
}
