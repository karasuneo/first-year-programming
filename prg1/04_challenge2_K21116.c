//
//  04_challenge2_K21116.c
//  
//
//  Created by k21116kk on 2021/05/09.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int turukame, asi, turu, kame;
    double x;
    printf("鶴と亀の合計は？ ");
    scanf("%d", &turukame);
    printf("足の本数は？ ");
    scanf("%d", &asi);
    turu = (2 * turukame) - (asi / 2);
    kame = turukame - turu;
    x = asi % ((2 * turu) + (4 * kame));
    if(x == 0 &&turu >= 0 &&kame >= 0)
    {
    printf("鶴は%d羽、亀は%dです。", turu, kame);
    }
    if(x != 0)
    {
    printf("そのような組み合わせはありません。");
    }
    if(turu < 0)
    {
    printf("そのような組み合わせはありません。");
    }
    if(kame < 0)
    {
    printf("そのような組み合わせはありません。");
    }
    return 0;
}
