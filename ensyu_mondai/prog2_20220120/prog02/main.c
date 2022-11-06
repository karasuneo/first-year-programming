//
//  main.c
//  prog02
//
//  Created by k21116kk on 2022/01/20.
//

#include <stdio.h>

void print16(unsigned int x) {
    if(x <= 9) {
        printf("%d", x);
    } else {
        switch(x) {
            case 10: printf("A"); break;
            case 11: printf("B"); break;
            case 12: printf("C"); break;
            case 13: printf("D"); break;
            case 14: printf("E"); break;
            case 15: printf("F"); break;
        }
    }
}

int main(int argc, const char * argv[]) {
    unsigned int n, array[50];
    int count=0;
    
    printf("n? ");
    scanf("%d", &n);
    while (n!=0) {
        array[count]=n%16;
        n=n/16;
        count++;
    }
    for (int i=count-1; i>=0; i--) {
        print16(array[i]);
    }
    printf("\n");
    return 0;
}

