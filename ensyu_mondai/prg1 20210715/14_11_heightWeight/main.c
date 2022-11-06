//
//  main.c
//  14_11_heightWeight
//
//  Created by k21116kk on 2021/07/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int human[3][2];
    for (int i = 0; i < 3; i++) {
        printf("%d人目 : ", i+1);
        scanf("%d %d", &human[i][0], &human[i][1]);
    }
    for (int i = 0; i < 3; i++) {
        printf("%d人目の身長と体重は %d %d です\n", i+1, human[i][0], human[i][1]);
    }
    return 0;
}
