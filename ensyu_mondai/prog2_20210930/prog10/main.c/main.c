//
//  main.c
//  prog10/main.c
//
//  Created by k21116kk on 2021/09/30.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    for (int i = 0; i<100; i++) {
        
        int num = rand()%3 + 3;
        printf("%d\n", num);
    }
    return 0;
}
