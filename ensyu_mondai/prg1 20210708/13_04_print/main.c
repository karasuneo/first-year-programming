//
//  main.c
//  13_04_print
//
//  Created by k21116kk on 2021/07/08.
//

#include <stdio.h>

void printFunc(void) {
    for (int i = 1; i < 6; i++) {
        printf("%d\n", i);
    }
}
int main(int argc, const char * argv[]) {
    printFunc();
    return 0;
}
