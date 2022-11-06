//
//  main.c
//  14_10_arrayinput
//
//  Created by k21116kk on 2021/07/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    double height[5], sum, average;
    sum = 0;
    for (int i = 0; i < 5; i++) {
        printf("%d人目の身長は？ ", i+1);
        scanf("%lf", &height[i]);
    }
    for (int j = 0; j < 3; j++) {
        sum += height[j];
    }
    average = sum / 3;
    printf("平均身長は %f です\n", average);
    return 0;
}
