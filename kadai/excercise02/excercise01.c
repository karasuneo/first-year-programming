//
//  main.c
//  excercise01
//
//  Created by k21116kk on 2021/10/21.
//

#include <stdio.h>
#include <math.h>

void getAvgSD(double num1, double num2, double *pave, double *pstanddiv) {
    double dis = ((num1-num2) * (num1-num2)) / 2; //分散
    *pave = (num1+num2) / 2;
    *pstanddiv = sqrt(dis);
    
}
int main(int argc, const char * argv[]) {
    double x, y, ave=0, standdiv=0;
    printf("x? ");
    scanf("%lf", &x);
    printf("y? ");
    scanf("%lf", &y);
    getAvgSD(x, y, &ave, &standdiv);
    printf("ave:%lf sd:%lf\n", ave, standdiv);
    return 0;
}
