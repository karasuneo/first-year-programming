//
//  04_challenge1_K21116.c
//  
//
//  Created by k21116kk on 2021/05/06.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int a, b, c, x;
    printf("x? ");
    scanf("%d", &x);
if(999>=x &&x>=100)
    {
    a = x/100;
    b = (x-100*a)/10;
    c = x-(a*100)-(b*10);
    printf("reverse x = %d%d%d", c, b, a);
    }
if(99>=x &&x>=10)
    {
    a = x/10;
    b = (x-10*a);
    printf("reverse x = %d%d0", b, a);
    }
if(9>=x &&x>=0)
    {
    printf("reverse x = %d00", x);
    }
    return 0;
}
    

