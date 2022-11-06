//
//  09_05_arrayloop.c
//  
//
//  Created by k21116kk on 2021/06/10.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int a[100];
    int i;
    for(i = 0; i < 100; i++){
        a[i] = i;
    }
    for(i = 0; i < 100; i++){
        printf("a[%d] : %d\n", i, a[i]);
    }
    return 0;
}
