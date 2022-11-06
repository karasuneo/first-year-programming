//
//  main.c
//  prog05
//
//  Created by k21116kk on 2021/12/23.
//

#typedef struct elem{
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
int main(int argc, const char * argv[]) {
    Elem *root=NULL;
    root=addElem(root, 333);
    root=addElem(root, 7);
    root=addElem(root, 4);
    root=addElem(root, 5);
    root=addElem(root, 22);
    
    printList(root);
    root=freeList(root);
    
    return 0;
}
