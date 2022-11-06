//
//  04_03_roundoff.c
//  
//
//  Created by k21116kk on 2021/05/06.
//

#include <stdio.h>
int main(int argc, const char * argv[]) {
    int nx;
    double dx;
    printf("dx? ");
    scanf("%lf", &dx);
    nx = dx;
    printf("nx = %d\n", nx);
    printf("nx/2 = %d\n", nx/2);
    return 0;
}
