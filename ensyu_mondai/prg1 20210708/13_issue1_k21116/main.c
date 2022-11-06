//
//  main.c
//  13_issue1_k21116
//
//  Created by k21116kk on 2021/07/08.
//

#include <stdio.h>
#include <math.h>
double calcArea (double r) {
    double menseki = M_PI * r * r;
    return (menseki);
}
double calcCircumference (double r) {
    double ensyu = 2 * M_PI * r;
    return (ensyu);
}
int main(int argc, const char * argv[]) {
    double r, area, circumference;
    printf("input r : ");
    scanf("%lf", &r);
    area = calcArea(r);
    circumference = calcCircumference(r);
    printf("半径 %f の円の面積は %f 、円周は %f です\n", r, area, circumference);
    return 0;
}
