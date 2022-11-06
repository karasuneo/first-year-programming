//
//  04_05_average.c
//  
//
//  Created by k21116kk on 2021/05/06.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    double h1,h2,h3;
    double average, a, b, c;
    printf("No.1? ");
    scanf("%lf", &h1);
    printf("No.2? ");
    scanf("%lf", &h2);
    printf("No.3? ");
    scanf("%lf", &h3);
    average = (h1 + h2 + h3)/3;
    printf("average = %f\n", average);
return 0;
}
