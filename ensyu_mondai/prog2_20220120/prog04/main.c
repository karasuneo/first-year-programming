//
//  main.c
//  prog04
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

unsigned int rrotate(unsigned int x, int n) {
    unsigned int lower, upper;
    lower=x>>n;
    upper=x<<(32-n);
    return lower|upper;
}

unsigned int lrotate(unsigned int x, int n) {
    unsigned int lower, upper;
    lower=x<<n;
    upper=x>>(32-n);
    return lower|upper;
}


int main(int argc, const char * argv[]) {
    unsigned int n, ans;
    int num_n;
    printf("n? num_n? ");
    scanf("%d%d", &n, &num_n);
    printbin(n);
    printf("\n");
    ans=rrotate(n, num_n);
    printbin(ans);
    printf("\n");
    ans=lrotate(n, num_n);
    printbin(ans);
    printf("\n");
    return 0;
}

