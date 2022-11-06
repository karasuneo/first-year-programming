//
//  09_03_switch3.c
//  
//
//  Created by k21116kk on 2021/06/10.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[])
{
    double x;
    int menu;
    printf("x? ");
    scanf("%lf",&x);
    
    printf("--- menu ---\n");
    printf("1:絶対値, 2:二乗, 3:三乗\n");
    
    printf("menu no? ");
    scanf("%d", &menu);
    
    switch (menu) {
        case 1:
            printf("|%lf| = %f\n", x, fabs(x));
            break;
        case 2:
            printf("%lf^2 = %lf\n", x, pow(x, 2));
            break;
        case 3:
            printf("%lf^3 = %lf\n", x, pow(x, 3));
            break;
    }
    
    return 0;
}
