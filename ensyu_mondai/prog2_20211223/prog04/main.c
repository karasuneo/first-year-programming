//
//  main.c
//  prog04
//
//  Created by k21116kk on 2021/12/23.
//

#include <stdio.h>
#include <stdlib.h>

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
    elem->next=root;
    return elem;
}
Elem* freeList(Elem *elem) {
    while (elem!=NULL) {
        Elem *next=elem->next;
        free(elem);
        elem=next;
    }
    return NULL;
}
int main(int argc, const char * argv[]) {
    Elem *root=NULL;
    root=addElem(root, 10);
    root=addElem(root, 7);
    root=addElem(root, 4);
    printList(root);
    root=freeList(root);
    
    return 0;
}
