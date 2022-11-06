//
//  main.c
//  prog02
//
//  Created by k21116kk on 2021/12/23.
//

#include <stdio.h>

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

int main(int argc, const char * argv[]) {
    Elem *root=NULL;
    Elem l1={10,root};
    root=&l1;
    Elem l2={7,root};
    root=&l2;
    Elem l3={4,root};
    root=&l3;
    printList(root);
    return 0;
}
