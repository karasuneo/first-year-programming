//
//  09_02_switch2.c
//  
//
//  Created by k21116kk on 2021/06/10.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    char ch;
    while((ch = getchar()) != '\n'){
        switch(ch){
            case ' ':
                printf("\n");
                break;
            
                
            default:
                printf("%c", ch);
                break;
                
        }
    }
    return 0;
}
