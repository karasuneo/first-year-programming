//
//  05_08_nested.c
//  
//
//  Created by k21116kk on 2021/05/13.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int a, b;
    printf("a? ");
    scanf("%d", &a);
    printf("b? ");
    scanf("%d", &b);
    if(a>0){
        if(b==0){
            printf("A");
        }
        else if(b>0){
            printf("B");
        }else {
            printf("C");
        }
    }else {
        printf("D");
    }
    return 0;
}
