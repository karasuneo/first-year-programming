//
//  main.c
//  11_03_dispstr1
//
//  Created by k21116kk on 2021/06/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char array[] = "abcde";
    for(int i = 0; i < 5; i++){
        printf("%c", array[i]);
    }
    printf("\n");
    return 0;
}
