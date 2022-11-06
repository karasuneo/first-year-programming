//
//  07_03_swap3.c
//  
//
//  Created by k21116kk on 2021/05/27.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int x, y, z, tmp;
    printf("3つの整数x, y, zを入力してください\nx? y? z?");
    scanf("%d %d %d", &x, &y, &z);
    if(x>y){
        tmp = x;
        x = y;
        y = tmp;
    }
    if(y>z){
        tmp = y;
        y = z;
        z = tmp;
    }
    if(x>y){
        tmp = x;
        x = y;
        y = tmp;
    }
    printf("xとyとzの値を小さい順に替えると%d %d %dです", x, y, z);
    return 0;
}
