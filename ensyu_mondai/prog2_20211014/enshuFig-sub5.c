#include <stdio.h>

void draw_figure(int size) {
    for(int i = 0; i < size; i++){
        for(int j = 0; j <= size; j++){
            if(i == size-j-1){
                printf("*");
            }else {
                printf(" ");
            }
        }
        printf("\n");
    }
  }