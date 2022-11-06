//
//  09_06_reverse.c
//  
//
//  Created by k21116kk on 2021/06/10.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int a[5];
    int i;
    printf("整数を５つ入力してください\n");
    
    for(i = 0; i < 5; i++){
        printf("imput %d : ", i);
        scanf("%d", &a[i]);
    }
    for(i = 4; i >= 0; i--){
        printf("%d : %d\n", i, a[i]);
    }
    return 0;
}
