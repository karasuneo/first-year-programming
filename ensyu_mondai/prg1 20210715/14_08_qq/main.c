//
//  main.c
//  14_08_qq
//
//  Created by k21116kk on 2021/07/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int pro;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            pro = i*j;
            printf("%d x %d = %d\n", i, j, pro);
        }
    }
    return 0;
}
