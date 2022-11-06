//
//  09_01_if1.c
//  
//
//  Created by k21116kk on 2021/06/10.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int n;
    printf("n? ");
    scanf("%d", &n);
    if(n == 1){
        printf("AAA");
    }else if(n == 2){
        printf("BBB");
    }else if(n == 3){
        printf("Defaultです");
    }
    return 0;
}
