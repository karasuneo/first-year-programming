//
//  main.c
//  13_09_macroSum
//
//  Created by k21116kk on 2021/07/08.
//

#include <stdio.h>

#define XMIN (5)
#define XMAX (15)
int a = XMIN;
int b = XMAX;

int main(int argc, const char * argv[]) {
    int sum = 0;
    for (int i = a; i <= b; i++) {
        sum += i;
    }
    printf("総和 = %d\n", sum);
    return 0;
}

