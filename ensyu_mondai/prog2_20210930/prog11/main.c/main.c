//
//  main.c
//  prog11/main.c
//
//  Created by k21116kk on 2021/09/30.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    int min, max;
    printf("最小値を入力してください ");
    scanf("%d", &min);
    printf("最小値を入力してください ");
    scanf("%d", &max);
    srand(time(NULL));
    for (int i = 0; i<100; i++) {
        int num = rand()%((max-min)+1) + min;
        printf("%d\n", num);
    }
    return 0;
}
