//
//  main.c
//  prog03
//
//  Created by k21116kk on 2021/12/16.
//

#include <stdio.h>
#include <math.h>

int recurrence(int n) {
    if (n==1 || n==2) {
        return  1;
    } else {
        return recurrence(n-1)+recurrence(n-2);
    }
}
    
int main(int argc, const char * argv[]) {
    for (int i=1; i<=10; i++) {
        printf("%d\n", recurrence(i));
    }
    
    return 0;
}
