//
//  main.c
//  prog01
//
//  Created by k21116kk on 2021/12/16.
//

#include <stdio.h>
#include <math.h>

int sigma(int n, int a) {
    int sum=0;
    for (int i=0; i<=n; i++) {
        sum+=pow(a, n-i);
    }
    return sum;
}

int main(int argc, const char * argv[]) {
    printf("%d\n", sigma(10, 4));
    return 0;
}
