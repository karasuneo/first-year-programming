//
//  main.c
//  prog03
//
//  Created by k21116kk on 2021/11/11.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    int x1=100;
    int y1=10;
    int x2=200;
    int y2=50;
    int disx=x2-x1;
    int disy=y2-y1;
    double dis=sqrt(disx*disx + disy*disy);
    printf("%lf\n", dis);
    return 0;
}
