//
//  main.c
//  12_04_heightWeight3
//
//  Created by k21116kk on 2021/07/01.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[3][2];
    for(int i = 0; i < 3; i++){
            printf("%d人目の身長と体重は？ ", i+1);
            scanf("%d %d", &a[i][0],&a[i][1]);
        }
    
    for(int i = 0; i < 3; i++){
        printf("%d人目の身長と体重は ", i+1);
        for(int j = 0; j < 2; j++){
            printf("%d ",a[i][j]);
        }
        printf("です\n");
    }
    return 0;
}
