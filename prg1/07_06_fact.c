//
//  07_06_fact.c
//  
//
//  Created by k21116kk on 2021/05/27.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int i, x, n, pro;
    pro = 1;
    printf("2つの整数x、nを入力してください\nx? n? ");
    scanf("%d %d", &x, &n);
    for(i=1; i<=n; i++){
        pro = pro * x;
    }
    printf("%d^%d = %d", x, n, pro);
    return 0;
}
