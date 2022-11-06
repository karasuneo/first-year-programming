//
//  main.c
//  prog07
//
//  Created by k21116kk on 2021/11/15.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int *array;
    int value=0;
    int count=0;
    array = (int*)malloc(sizeof(int)*1);
    while (1) {
        printf("数字を入力してください ");
        scanf("%d", &value);
        if (value<0) {
            break;
        }
        array[count] = value;
        array=(int*)realloc(array,sizeof(int)*1);
        count++;
    }
    for (int i=0; i<count; i++) {
        printf("array[%d] : %d \n", i, array[i]);
    }
    free(array);
    return 0;
}
