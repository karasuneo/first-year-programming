//
//  10_05_arrayminmax.c
//  
//
//  Created by k21116kk on 2021/06/17.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int max, min, height[5];
    for(int i = 0; i < 5; i++){
        printf("%d人目の身長は? ", i+1);
        scanf("%d", &height[i]);
    }
    for(int j = 0; j < 5; j++){
        max = height[0];
        if(max < height[j]){
            max = height[j];
        }
    }
    for(int k = 0; k < 5; k++){
        min = height[0];
        if(min > height[k]){
            min = height[k];
        }
    }
    printf("最大値は %d です\n", max);
    printf("最小値は %d です\n", min);
    return 0;
}
