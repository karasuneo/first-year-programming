//
//  04_02_rectangle.c
//  
//
//  Created by k21116kk on 2021/05/06.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    double tate, yoko, menseki;
    
    printf("縦は？\n横は？\n");
    scanf("%lf\n %lf",&tate,&yoko);
    menseki=tate*yoko;
    printf("長方形の面積は %f です。", menseki);
    return 0;
}
