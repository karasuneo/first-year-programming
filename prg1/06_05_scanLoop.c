//
//  06_05_scanLoop.c
//  
//
//  Created by k21116kk on 2021/05/20.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int a, b, i;
    for(i=1; i <= 5; i++){
        printf("a? ");
        scanf("%d", &a);
        printf("%d: %d\n", i, a);
    }
    return 0;
}
