//
//  main.c
//  11_09_heightWeight3
//
//  Created by k21116kk on 2021/06/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[3][2];
    for(int i = 0; i < 3; i++){
        printf("%d人目の身長と体重は？ ", i+1);
        for(int j = 0; j < 2; j++){
            scanf("%d %d", a[i][j]);
        }
        printf("%d人目の身長と体重は %d %d です\n", i+1, a[j][0], a[j][1]);
    }
    return 0;
}
