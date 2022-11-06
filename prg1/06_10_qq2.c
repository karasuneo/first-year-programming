//
//  06_10_qq2.c
//  
//
//  Created by k21116kk on 2021/05/20.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int i, j, x, y;
    printf("知りたい九九の段をyに入力してください\ny? ");
    scanf("%d", &y);
    for(i=y; i<=y+2 &&i<=9; i++){
        for(j=1; j<=9; j++){
            x = i*j;
            printf("%d x %d = %d\n", i, j, x);
        }
    }
    return 0;
}
