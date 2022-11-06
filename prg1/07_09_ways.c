//
//  07_09_ways.c
//  
//
//  Created by k21116kk on 2021/05/27.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int i, j, k, x, n, sum;
    sum = 0;
    printf("2つの整数n、xを入力してください\nx? n? ");
    scanf("%d %d", &n, &x);
    
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            for(k=1; k<=n; k++){
                if(i+j+k==x){
                    printf("(%d,%d,%d)\n", i, j, k);
                    sum = sum + 1;
              }
            }
          }
        }
    printf("組み合わせの個数は%d個です", sum);
    return 0;
}

for(i = 2; i <= x/2; i++){
    y = 0;
    for(j = 2; j < i; j++){
        if(i%j == 0){
            y = 1;
            break;
        }
    }
    if(y == 0)
        printf("%d ", i);
}
return 0;
}
