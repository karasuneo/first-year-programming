//
//  main.c
//  prog06
//
//  Created by k21116kk on 2021/11/11.
//

#include<stdio.h>
#include<stdlib.h>
#define MAX 256

int main(void){
    FILE *fp;
    char line[MAX];
    
    fp=fopen("numbers.txt","w");
    if(fp==NULL){
        printf("Cannot open the file.\n");
        exit(0);
    }
    for (int i=0; i<100; i++) {
        fprintf(fp, "%d \n", i);
    }
    fclose(fp);
    return 0;
}
