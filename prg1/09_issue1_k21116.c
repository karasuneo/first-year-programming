//
//  09_issue1_k21116.c
//  
//
//  Created by k21116kk on 2021/06/11.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int a[3], b[3];
    
    for(int i = 0; i < 3; i++){
        printf("a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    for(int j = 0; j <= 2; j++){
        printf("b[%d] : ", j);
        scanf("%d", &b[j]);
    }
    for(int k = 0; k < 3; k++){
        int dif = a[k]-b[k];
        printf("a[%d] - b[%d] = %d\n", k, k, dif);
    }
    return 0;
}
