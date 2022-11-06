//
//  08_issue1_k21116.c
//  
//
//  Created by k21116kk on 2021/06/03.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int saifu, ginko, x;
    saifu = 1000;
    ginko = 1000;
    while(ginko>=0 &&saifu>=0){
        printf("x? ");
        scanf("%d", &x);
        ginko = ginko - x;
        saifu = saifu + x;
        if(ginko<0){
            printf("取引終了\n");
            break;
        }else if(saifu<0){
            printf("取引終了\n");
            break;
        }else if(x==0){
            printf("取引終了\n");
            break;
        }
        printf("銀行 : %d 財布 : %d\n", ginko, saifu);
    }
    printf("$\n");
    return 0;
}
