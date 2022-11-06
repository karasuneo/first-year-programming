//
//  main.c
//  prog02
//
//  Created by k21116kk on 2021/10/28.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[3];
    for (int i=0; i < 3; i++) {
        printf("%p\n", &a[i]);
    }
    return 0;
}
