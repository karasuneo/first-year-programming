//
//  main.c
//  prog09
//
//  Created by k21116kk on 2021/11/04.
//

#include <stdio.h>
#include <string.h>

void swap_str_ptr(char **p1, char **p2) {
    char *tmp=*p1;//*paはaの見ている値
    *p1=*p2;
    *p2=tmp;
}
void sort_str_ptr(char **p1, char **p2) {//ポインタのアドレスを取得してポインタを作成する
    size_t len1, len2;
    len1 = strlen(*p1);
    len2 = strlen(*p2);
    if (len1 > len2) {
        swap_str_ptr(&*p1, &*p2);
    }
}
int main(int argc, const char * argv[]) {
    char *a="abcde";
    char *b="xyz";
    sort_str_ptr(&a, &b);//ポインタのアドレスを渡す
    printf("*a : %s \n", a);
    printf("*b : %s \n", b);
    return 0;
}
//ポインタは値をもつわけではない！
