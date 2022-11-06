//
//  07_01_swap.c
//  
//
//  Created by k21116kk on 2021/05/27.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int x, y, tmp;
    printf("二つの整数x, yを入力してください\nx? y? ");
    scanf("%d %d", &x, &y);
    tmp = x;
    x = y;
    y = tmp;
    printf("xとyの値を入れ替えた数字は%d %dです", x, y);
    return 0;
}
