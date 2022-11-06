//
//  main.c
//  12_09_linearfunc
//
//  Created by k21116kk on 2021/07/01.
//

#include <stdio.h>
int f(int x){
    int k;
    k = 2 * x + 1;
    return (k);
}
int main(int argc, const char * argv[]) {
    int hensu, kansu;
    for (int i = 0; i < 5; i++) {
        hensu = i;
        kansu = f(hensu);
        printf("f(%d) = %d\n", i, kansu);
    }
    return 0;
}
