//
//  main.c
//  exercise2/main.c
//
//  Created by k21116kk on 2021/10/03.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    double sita, dosu_double, sinnoatai;
    for (dosu_double = 0; dosu_double <= 360; dosu_double += 10) {
        sita = (dosu_double)*(M_PI/180);
        sinnoatai = sin(sita);
        int dosu_int = dosu_double;
        printf("度数が %d のときのsinの値は% lf です\n", dosu_int, sinnoatai);
    }
    return 0;
}
