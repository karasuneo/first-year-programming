#include <stdio.h>

void draw_figure(int size) {
    for(int i = 0; i < size; i++){
        for(int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
  }