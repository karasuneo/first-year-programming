//
//  main.c
//  prog05
//
//  Created by k21116kk on 2021/10/28.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[5]={10,20,30,40,50};
    int *p=a;
    for (int i=0; i<5; i++) {
        p[i]++;
    }
    for (int j=0; j<5; j++) {
        printf("%d\n", p[j]);
    }
    return 0;
}
