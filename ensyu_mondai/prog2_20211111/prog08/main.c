//
//  main.c
//  prog08
//
//  Created by k21116kk on 2021/11/11.
//

#include<stdio.h>
#include<stdlib.h>
#define MAX 256

int main(void){
    FILE *fp;
    
    fp=fopen("prime.txt","w");
    if(fp==NULL){
        printf("Cannot open the file.\n");
        exit(0);
    }
    for (int i=0; i<100; i++) {
        for(int j=2; j<=i; ++j ) {
            if (i == j) {
                fprintf(fp, "%d \n", i);
                printf("%d \n", i);
            }
            if (i%j == 0) {
                break;
            }
        }
    }
    fclose(fp);
    return 0;
}
