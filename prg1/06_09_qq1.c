//
//  06_09_qq1.c
//  
//
//  Created by k21116kk on 2021/05/20.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int i, j, x;
    printf("九九の1〜9の段は\n");
    for(i=1; i<=9; i++){
        for(j=1; j<=9; j++){
            x = i*j;
            printf("%d x %d = %d\n", i, j, x);
        }
    }
    printf("です。");
    return 0;
}
