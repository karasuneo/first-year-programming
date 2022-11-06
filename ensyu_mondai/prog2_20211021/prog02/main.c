//
//  main.c
//  prog02
//
//  Created by k21116kk on 2021/10/21.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x = 100;
    int y = 200;
    int *pox = &x;
    int *poy = &y;
    printf("%d\n",x);
    printf("%d\n",y);
    *pox = 1;
    printf("%d\n",x);
    *poy = 2;
    printf("%d\n",y);
    return 0;
}
