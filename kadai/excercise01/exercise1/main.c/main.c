//
//  main.c
//  exercise1/main.c
//
//  Created by k21116kk on 2021/10/03.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    double r, ensyu, menseki;
    printf("円の半径を入力してください ");
    scanf("%lf", &r);
    ensyu = 2*M_PI*r;
    menseki = M_PI*r*r;
    printf("半径 %lf の円の円周は %lf 面積は %lf です\n", r, ensyu, menseki);
    return 0;
}
