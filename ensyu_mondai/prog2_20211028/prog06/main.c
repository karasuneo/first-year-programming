//
//  main.c
//  prog06
//
//  Created by k21116kk on 2021/10/28.
//

#include <stdio.h>

void func(int *array) {
    for (int i=0; i<5; i++) {
        array[i]*=10;
        printf("%d\n", array[i]);
    }
}
int main(int argc, const char * argv[]) {
    int a[5]={10,20,30,40,50};
    func(a);
    return 0;
}
