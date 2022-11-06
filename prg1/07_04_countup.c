//
//  07_04_countup.c
//  
//
//  Created by k21116kk on 2021/05/27.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int i, n;
    printf("整数 n を入力してください\nn? ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        printf("%d\n", i);
    }
    return 0;
}
