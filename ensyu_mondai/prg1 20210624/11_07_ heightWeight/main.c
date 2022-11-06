//
//  main.c
//  11_07_ heightWeight
//
//  Created by k21116kk on 2021/06/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[3][2] = {{170, 80},{160, 50},{180, 70}};
    for(int i = 0; i < 3; i++){
        printf("身長=%dcm, 体重=%dkg\n", a[i][0], a[i][1]);
    }
    return 0;
}
