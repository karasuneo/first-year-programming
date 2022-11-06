//
//  main.c
//  13_10_macroQQ
//
//  Created by k21116kk on 2021/07/08.
//

#include <stdio.h>
#define X_FIRST (9)
#define X_SECOND (9)
int a = X_FIRST;
int b = X_SECOND;
int main(int argc, const char * argv[]) {
    int pro;
    for(int i = 1; i <= a; i++) {
        for(int j = 1; j <= b; j++){
            pro = i * j;
            printf("%d x %d = %d\n", i, j, pro);
        }
    }
    return 0;
}
