//
//  main.c
//  prog08
//
//  Created by k21116kk on 2021/12/23.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 256

typedef struct elem{
    int num;
    struct elem *next;
}Elem;
void printList (Elem *elem){
    if (elem==NULL) {
        return;
    }
    while (elem!=NULL) {
        printf("%d\n", elem->num);
        elem=elem->next;
    }
}
Elem* addElem(Elem *root, int num) {
    Elem *elem=(Elem*)malloc(sizeof(Elem));
    elem->num=num;
    
    Elem *current=root;
    Elem *prev=NULL;
    if (root==NULL) {
        elem->next=root;
        return elem;
    }else{
        while (current!=NULL) {
            if (num<current->num) {
                break;
            }
            prev=current;
            current=current->next;
        }
    }
    elem->next=current;
    if (prev==NULL) {
        root=elem;
    }else {
        prev->next=elem;
    }
    return root;
}
Elem* freeList(Elem *elem) {
    while (elem!=NULL) {
        Elem *next=elem->next;
        free(elem);
        elem=next;
    }
    return NULL;
}
Elem* deleteElem(Elem *root, int delnum){
    Elem *current=root;
    Elem *prev=NULL;
    while (current!=NULL) {
        if (current->num==delnum) {
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

int main(void){
    FILE *fp;
    char line[MAX];
    int n[30],num=0;
    Elem *root=NULL;
    
    fp=fopen("numlist.txt","r");
    if(fp==NULL){
        printf("Cannot open the file.\n");
        exit(0);
    }
    while(fgets(line,MAX,fp)!=NULL){
        char *value =(strtok(line,"\n"));
        n[num]=atoi(value);
        num++;
    }
    for(int i=0;i<num;i++){
        root = addElem(root, n[i]);
        
    }
    fclose(fp);
    printList(root);
    freeList(root);
    return 0;
}
