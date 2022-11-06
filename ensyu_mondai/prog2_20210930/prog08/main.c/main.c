//
//  main.c
//  prog08/main.c
//
//  Created by k21116kk on 2021/09/30.
//

#include <stdio.h>
#define NUMA 100
#define NUMB 2
#define NUMC 3

int main(int argc, const char * argv[]) {
    
    for (int i = 1; i <= NUMA; i++) {
        printf("hoge");
        if (i % NUMB == 0) {
            printf("foo");
        }
        if (i % NUMC == 0) {
            printf("bar");
        }
        printf("\n");
    }
    return 0;
}
