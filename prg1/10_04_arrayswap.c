//
//  10_04_arrayswap.c
//  
//
//  Created by k21116kk on 2021/06/17.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int x, y, tmp;
    int a[5] = {1,2,3,4,5};
    printf("何番目を入れ替えますか？");
    scanf("%d %d", &x, &y);
    if(x < 0 || y < 0|| x > 5|| y > 5){
        printf("正しくありません\n");
        return 1;
    }else {
        x--;
        y--;
        tmp = a[x];
        a[x] = a[y];
        a[y] = tmp;
        for(int i = 0; i < 5; i++){
            printf("a[%d] = %d\n", i, a[i]);
        }
    }
    return 0;
}
