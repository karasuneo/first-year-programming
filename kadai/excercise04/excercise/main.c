//
//  main.c
//  excercise
//
//  Created by k21116kk on 2021/11/04.
//

#include <stdio.h>
#include <string.h>

void swap_str_ptr(char **p1, char **p2) {
    char *tmp=*p1;
    *p1=*p2;
    *p2=tmp;
}
void sort_str_ptr(char **p1, char **p2) {
    size_t len1, len2;
    len1 = strlen(*p1);
    len2 = strlen(*p2);
    if (len1 > len2) {
        swap_str_ptr(&*p1, &*p2);
    }
}
void bubble_str_ptr(char **p, int n){
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            sort_str_ptr(&p[j], &p[j+1]);
        }
    }
}
int main(int argc, const char * argv[]) {
    char *list[]={"hoge","abc","xy","fugagaga"};
    const int size = sizeof(list) / sizeof(list[0]);
    
    bubble_str_ptr(&*list, size);
    for (int i=0; i<size; i++) {
        printf("list[%d] : %s \n", i, list[i]);
    }
    return 0;
}
