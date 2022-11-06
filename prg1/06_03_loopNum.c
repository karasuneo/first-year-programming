//
//  06_03_loopNum.c
//  
//
//  Created by k21116kk on 2021/05/20.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int i, n;
    printf("何回入力するかnに入力してください。\nn? ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        printf("Hello World!\n");
    }
    return 0;
}
