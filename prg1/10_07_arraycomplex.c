//
//  10_07_arraycomplex.c
//  
//
//  Created by k21116kk on 2021/06/17.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int size = 5;
    int i;
    double bmi[size],standardweight[size], height[size], weight[size], Height[size];
    for(i = 0; i < size; i++){
        printf("%d人目の身長と体重は? ", i+1);
        scanf("%lf %lf", &height[i], &weight[i]);
    }
    for(i = 0; i < size; i++){
        standardweight[i] = (height[i] - 100) * 0.9;
        Height[i] = height[i] / 100;
        bmi[i] = weight[i] / (Height[i] * Height[i]);
    }
    for(i = 0; i < size; i++){
        if(bmi[i] > 23){
            printf("%d人目のBMI %lf はしきい値を超えています\n", i+1, bmi[i]);
            printf("標準体重との差は %lf です\n", weight[i]-standardweight[i]);
        }
    }
    return 0;
}
