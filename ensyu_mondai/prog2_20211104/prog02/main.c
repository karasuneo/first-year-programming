//
//  main.c
//  prog02
//
//  Created by k21116kk on 2021/11/04.
//

#include <stdio.h>

int my_strlen(char *array) {
    int i=0;
    while (array[i] != '\0') {
        i++;
    }
    return (i);
}
int main(int argc, const char * argv[]) {
    char str[]="qaz";
    int size;
    size = my_strlen(str);
    printf("size : %d\n", size);
    return 0;
}
