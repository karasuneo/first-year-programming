//
//  main.c
//  14_04_switch2
//
//  Created by k21116kk on 2021/07/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char c;
    printf("c? ");
    c = getchar();
    switch (c) {
        case 'L':
            printf("Left\n");
            break;
        case 'R':
            printf("Right\n");
        default:
            printf("nop\n");
            break;
    }
    return 0;
}
