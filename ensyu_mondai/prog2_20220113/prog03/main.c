//
//  main.c
//  prog03
//
//  Created by k21116kk on 2022/01/12.
//

#include <stdio.h>

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

int main(int argc, const char * argv[]) {
    Melem *root=NULL;
    Melem l1={"iti", 160, 55, root};
    root=&l1;
    Melem l2={"ni", 190, 70, root};
    root=&l2;
    Melem l3={"san", 140, 60, root};
    root=&l3;
    printMList(root);
    return 0;
}
