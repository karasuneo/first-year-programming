//
//  06_08_even2.c
//  
//
//  Created by k21116kk on 2021/05/20.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int i, x;
    printf("0〜10の範囲に存在する偶数は\n");
    for(i=0; i <= 10; i++){
        x = i%2;
        if(x == 0){
            printf("%d\n", i);
        }
    }
    printf("です。");
    return 0;
}
