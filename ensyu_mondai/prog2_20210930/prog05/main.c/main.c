//
//  main.c
//  prog05/main.c
//
//  Created by k21116kk on 2021/09/30.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    for (int i = 1; i < 101; i++) {
        printf("hoge");
        if (i % 2 == 0) {
            printf("foo");
        }
        if (i % 3 == 0) {
            printf("bar");
        
        }
        printf("\n");
    }
    return 0;
}
