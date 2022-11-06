//
//  05_issue1_K21116.c
//  
//
//  Created by k21116kk on 2021/05/13.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int x, y, z;
    printf("x? ");
    scanf("%d", &x);
    y = x%2;
    z = x%3;
    if(y==0 &&z==0){
        printf("2の倍数です\n3の倍数です");
        }else if(y==0 && z!=0){
            printf("2の倍数です\n3の倍数ではありません");
        }else if(y!=0 &&z==0){
            printf("2の倍数ではありません\n3の倍数です");
        }else {
            printf("2の倍数ではありません\n3の倍数ではありません");
        }
    return 0;
}
