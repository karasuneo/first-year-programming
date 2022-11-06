//
//  main.c
//  prog10
//
//  Created by k21116kk on 2022/01/12.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 256

typedef struct melem{
    char name[10];
    int height;
    int weight;
    struct melem *next;
}Melem;
void printMList (Melem *root){
    Melem *current=root;
    if (current==NULL) {
        return;
    }
    while (current!=NULL) {
        printf("%s, %d, %d\n", current->name, current->height, current->weight);
        current=current->next;
    }
}
Melem* addMElem(char *name, int height, int weight, Melem *root) {
    Melem *melem=(Melem*)malloc(sizeof(Melem));
    strcpy(melem->name, name);
    melem->height=height;
    melem->weight=weight;
    melem->next=root;
    
    Melem *current=root;
    Melem *prev=NULL;
    while (current!=NULL) {
        if (strcmp(current->name, melem->name)>0) {
            break;
        }else if(strcmp(current->name, melem->name)==0) {
            current->weight=weight;
            current->height=height;
            free(melem);
            return root;
        }
        prev=current;
        current=current->next;
    }
    melem->next=current;
    if (prev==NULL) {
        root=melem;
    }else {
        prev->next=melem;
    }
    
    
    return root;
}
Melem* deleteMelem(char *name, Melem *root){
    Melem *current=root;
    Melem *prev=NULL;
    while (current!=NULL) {
        if (strcmp(current->name, name)==0) {
            break;
        }
        prev=current;
        current=current->next;
    }
    if (current==NULL) {
        return root;
    }
    if (prev==NULL) {
        root=current->next;
    } else{
        prev->next=current->next;
    }
    free(current);
    return root;
}

Melem* freeMList(Melem *melem) {
    while (melem!=NULL) {
        Melem *next=melem->next;
        free(melem);
        melem=next;
    }
    return NULL;
}

int main(void){
    FILE *fp;
    char line[MAX];
    char name[30][10];
    int height[30];
    int weight[30];
    int num=0;
    
    Melem *root=NULL;
    
    fp=fopen("meibo.csv","r");
    if(fp==NULL){
        printf("Cannot open the file.\n");
        exit(0);
    }
    while(fgets(line,MAX,fp)!=NULL){
        char *value =(strtok(line," \n"));
        strcpy(name[num], value);
        value=strtok(NULL, " \n");
        height[num]=atoi(value);
        value=strtok(NULL, " \n");
        weight[num]=atoi(value);
        value=strtok(NULL, " \n");
        num++;
    }
    fclose(fp);
    for(int i=0;i<num;i++){
        root=addMElem(name[i], height[i], weight[i], root);
        
    }
    fclose(fp);
    printMList(root);
    freeMList(root);
    return 0;
}
