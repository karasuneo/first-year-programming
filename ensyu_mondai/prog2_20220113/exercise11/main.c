//
//  main.c
//  exercise01
//
//  Created by k21116kk on 2022/01/18.
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
    char name_op[10];
    int height_op;
    int weight_op;
    char option='x';
    
    Melem *root=NULL;
    
    fp=fopen("meibo.csv","r");
    if(fp==NULL){
        printf("Cannot open the file.\n");
        exit(0);
    }
    while (option!='q') {
        printf("option? ");
        scanf("%c", &option);
        switch (option) {
            case 'a':
                printf("挿入したい内容を入力してください\n");
                printf("name? height? weight? ");
                scanf("%s %d %d", name_op, &height_op, &weight_op);
                root=addMElem(name_op, height_op, weight_op, root);
                break;
            case 'd':
                printf("削除したい名前を入力してください\n");
                printf("name? ");
                scanf("%s", name_op);
                root=deleteMelem(name_op, root);
                break;
            case 'p':
                printMList(root);
            default:
                break;
        }
    }
    fclose(fp);
    
    fp=fopen("meibo.csv","w");
    if(fp==NULL){
        printf("Cannot open the file.\n");
        exit(0);
    }
    while (root!=NULL) {
        fprintf(fp,"%s %d %d\n", root->name, root->height, root->weight);
        root=root->next;
    }
    fclose(fp);
    printMList(root);
    freeMList(root);
    return 0;
}
