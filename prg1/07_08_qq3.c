//
//  07_08_qq3.c
//  
//
//  Created by k21116kk on 2021/05/27.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int i, j, x;
    printf("九九の1〜9の段は\n");
    for(i=1; i<=9; i++){
        for(j=1; j<=9; j++){
            x = i*j;
            printf("%3d", x);
        }
        printf("\n");
    }
    printf("です。");
    return 0;
}

