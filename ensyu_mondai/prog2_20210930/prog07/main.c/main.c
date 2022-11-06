//
//  main.c
//  prog07/main.c
//
//  Created by k21116kk on 2021/09/30.
//

#include <stdio.h>
#define NUM1 10
#define NUM2 3

int main(int argc, const char * argv[]) {
    
    for (int i = 1; i <= NUM1; i++) {
        printf("hoge");
        if (i%NUM2 == 0) {
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}

