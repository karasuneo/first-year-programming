//
//  main.c
//  14_09_arraysum
//
//  Created by k21116kk on 2021/07/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int sum = 0;
    int a[] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    for (int i = 0; i < 10; i++) {
        sum += a[i];
    }
    printf("合計 = %d\n", sum);
    return 0;
}
