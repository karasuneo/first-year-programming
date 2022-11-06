//
//  main.c
//  exercise06
//
//  Created by k21116kk on 2021/11/22.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    double z_one = (47-50) / 3;
    double z_two = (56-50) / 3;
    double x = 0.5 * erf(fabs(z_one) / sqrt(2.0));
    printf("%lf \n", x);
    printf("Hello, World!\n");
    return 0;
}
