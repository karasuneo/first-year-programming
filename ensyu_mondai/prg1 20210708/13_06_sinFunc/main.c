//
//  main.c
//  13_06_sinFunc
//
//  Created by k21116kk on 2021/07/08.
//

#include <stdio.h>
#include <math.h>
double deg2Rad(double theta) {
    double rad = (theta / 180) * M_PI;
    return (rad);
}
int main(int argc, const char * argv[]) {
    double θ, φ;
    printf("inpurt : ");
    scanf("%lf", &θ);
    φ = deg2Rad(θ);
    printf("sin(%lf) = %lf\n", θ, sin(φ));
    return 0;
}

