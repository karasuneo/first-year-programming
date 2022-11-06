//
//  main.c
//  12_02_heightWeight.c
//
//  Created by k21116kk on 2021/07/01.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[3][2] = {{170, 80},{160, 50},{180, 70}};
    for(int i = 0; i < 3; i++){
        printf("%d人目の身長と体重は %d %d です\n", i+1,a[i][0], a[i][1]);
    }
    return 0;
}
