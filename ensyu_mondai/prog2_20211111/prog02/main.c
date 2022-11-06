//
//  main.c
//  prog02
//
//  Created by k21116kk on 2021/11/11.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int r=10;
    double area, circumference;
    area = r*r*M_PI;
    circumference = 2*M_PI*r;
    printf("円の面積は %lf です\n", area);
    printf("円周は %lf です\n", circumference);
    return 0;
}
