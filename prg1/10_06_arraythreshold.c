//
//  10_06_arraythreshold.c
//  
//
//  Created by k21116kk on 2021/06/17.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int x, height[5];
    for(int i = 0; i < 5; i++){
        printf("%d人目の身長は? ", i+1);
        scanf("%d", &height[i]);
    }
    for(int j = 0; j < 5; j++){
        if(height[j] > 170){
            printf("%d人目の身長 %d はしきい値を超えています\n", j+1, height[j]);
        }
    }
    return 0;
}
