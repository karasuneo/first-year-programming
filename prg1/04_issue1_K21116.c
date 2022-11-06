//
//  04_issue1_K21116.c
//  
//
//  Created by k21116kk on 2021/05/06.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    double weight, height, standardweight, bmi, Height, d;
    printf("身長は？");
    scanf("%lf", &height);
    printf("体重は？");
    scanf("%lf", &weight);
    
    standardweight = (height - 100) * 0.9;
    Height = height/100;
    bmi = weight / (Height*Height);
    d = weight - standardweight;
    printf("標準体重との差は %f です\n",d);
    printf("BMIは %f です\n", bmi);
    return 0;
}
