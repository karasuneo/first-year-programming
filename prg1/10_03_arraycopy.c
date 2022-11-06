//
//  10_03_arraycopy.c
//  
//
//  Created by k21116kk on 2021/06/17.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    double height[5], Height[5];
    for(int i = 0; i < 5; i++){
        printf("%d人目の身長は? ", i+1);
        scanf("%lf", &height[i]);
    }
    for(int j = 0; j < 5; j++){
        Height[j] = height[j] / 100;
    }
    for(int k = 0; k < 5; k++){
        printf("%d人目の身長は %lf m です\n", k+1, Height[k]);
    }
    return 0;
}
