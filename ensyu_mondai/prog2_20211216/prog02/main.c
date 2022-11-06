//
//  main.c
//  prog02
//
//  Created by k21116kk on 2021/12/16.
//

#include <stdio.h>

int recurrence(int n) {
    int sum=1;
    if (n==1) {
        return 1;
    }
    if (n<=0) {
        return printf("out!\n");
    }
    for (int i=1; i<n; i++) {
        sum+=2;
    }
    return  sum;
}
int main(int argc, const char * argv[]) {
    printf("%d\n", recurrence(10));
    return 0;
}
