//
//  10_02_arrayinput.c
//  
//
//  Created by k21116kk on 2021/06/17.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int height[5], sum;
    double average;
    sum = 0;
    for(int i = 0; i < 5; i++){
        printf("%d人目の身長は? ", i+1);
        scanf("%d", &height[i]);
    }
    for(int j = 0; j < 5; j++){
        sum += height[j];
    }
    
    average = sum / 5;
    printf("平均身長 = %lf\n", average);
    return 0;
}
