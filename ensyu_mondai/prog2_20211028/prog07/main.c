//
//  main.c
//  prog07
//
//  Created by k21116kk on 2021/10/28.
//

#include <stdio.h>

void func2(int *array, int n) {
    for (int i=0; i<n; i++) {
        array[i]*=10;
    }
}
int main(int argc, const char * argv[]) {
    int a[5]={10,20,30,40,50};
    int b[4]={3,4,5,6};
    func2(a, 5);
    func2(b, 4);
    for (int i=0; i<5; i++) {
        printf("a[%d] : %d\n", i, a[i]);
    }
    for (int j=0; j<4; j++) {
        printf("b[%d] : %d\n", j, b[j]);
    }
    return 0;
}
