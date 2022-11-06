//
//  08_02_whileLoop.c
//  
//
//  Created by k21116kk on 2021/06/03.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int n;
    printf("n? ");
    scanf("%d", &n);
    while(n>=0){
        printf("%d\n", n);
        n =  n-1;
        }
    return 0;
}
