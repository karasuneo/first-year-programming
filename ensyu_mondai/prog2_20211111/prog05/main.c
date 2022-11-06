//
//  main.c
//  prog05
//
//  Created by k21116kk on 2021/11/11.
//

#include<stdio.h>
#include<stdlib.h>
#define MAX 256
int main(void){
    FILE *fp;
    char line[MAX];
    
    fp=fopen("meido.txt","r");
    if(fp==NULL){
        printf("Cannot open the file.\n");
        exit(0);
    }
    while(fgets(line,MAX,fp)!=NULL){
        printf("%s\n",line);
    }
    fclose(fp);
    return 0;
}
