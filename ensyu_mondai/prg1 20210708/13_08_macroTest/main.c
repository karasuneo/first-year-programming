//
//  main.c
//  13_08_macroTest
//
//  Created by k21116kk on 2021/07/08.
//

#include <stdio.h>

#define X_NUM (10)
int a = X_NUM;
int main(int argc, const char * argv[]) {
    int sum = 0;
    for (int i = 0; i <= a ; i++) {
        sum += i;
    }
    printf("総和 = %d\n", sum);
    return 0;
}

