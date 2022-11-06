//
//  main.c
//  prog05
//
//  Created by k21116kk on 2022/01/12.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct melem{
    char name[10];
    int height;
    int weight;
    struct melem *next;
}Melem;
void printMList (Melem *melem){
    if (melem==NULL) {
        return;
    }
    while (melem!=NULL) {
        printf("%s, %d, %d\n", melem->name, melem->height, melem->weight);
        melem=melem->next;
    }
}
Melem* addMElem(char *name, int height, int weight, Melem *root) {
    Melem *melem=(Melem*)malloc(sizeof(Melem));
    strcpy(melem->name, name);
    melem->height=height;
    melem->weight=weight;
    melem->next=root;
    return melem;
}
Melem* freeMList(Melem *melem) {
    while (melem!=NULL) {
        Melem *next=melem->next;
        free(melem);
        melem=next;
    }
    return NULL;
}

int main(int argc, const char * argv[]) {
    Melem *root=NULL;
    root=addMElem("iti", 160, 55, root);
    root=addMElem("san", 163, 434, root);
    root=addMElem("ni", 222, 567, root);
    printMList(root);
    freeMList(root);
    return 0;
}
