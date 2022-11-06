//
//  main.c
//  prog04
//
//  Created by k21116kk on 2021/12/16.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int getrand(int i) {
    int num=rand()%(i+1);
    return  num;
}
void swap(int a[], int i, int j) {
    int tmp=a[i];
    a[i]=a[j];
    a[j]=tmp;
}

int main(int argc, const char * argv[]) {
    srand((unsigned)time(NULL));
    int a[]={1,2,3,4,5,6,7,8,9,10};
    for (int i=9; i>0; i--) {
        swap(a, i, getrand(i));
    }
    for (int i=0; i<10; i++) {
        printf("%d\n",a[i]);
    }
    return 0;
}
