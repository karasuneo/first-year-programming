//
//  08_01_rectangle.c
//  
//
//  Created by k21116kk on 2021/06/03.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int h, w, i, j;
    printf("h? w? ");
    scanf("%d%d", &h, &w);
    for(i=1; i<=h; i++){
        for(j=1; j<=w; j++){
            putchar('#');
        }
        putchar('\n');
    }
    return 0;
}
