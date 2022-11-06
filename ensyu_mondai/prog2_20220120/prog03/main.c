//
//  main.c
//  prog03
//
//  Created by k21116kk on 2022/01/20.
//

#include <stdio.h>
#define MAX_BIT 32

void printbin(unsigned int x) {
    unsigned int array[32];
    int count=0;
    while (count < MAX_BIT) {
        array[count]=x&1;
        x=x>>1;
        count++;
    }
    for (int i=count-1; i>=0; i--) {
        printf("%d", array[i]);
    }
}

int main(int argc, const char * argv[]) {
    int n;
    printf("n? ");
    scanf("%d", &n);
    printbin(n);
    printf("\n");
    return 0;
}
