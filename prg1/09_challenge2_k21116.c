//
//  09_challenge2_k21116.c
//  
//
//  Created by k21116kk on 2021/06/13.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int x, y, z, a[z], i, ans;
    char ch;
    y = 0;
    z = 0;
    ans = 0;
    printf("equation? ");
    while((ch = getchar()) != '='){
        switch (ch) {
            case '+':
                y = 1;
                break;
            case '-':
                y = 2;
                break;
            default:
                x = ch - '0';
                y = 3;
                
            switch (y) {
                case 0:
                    ans = x;
                    break;
                case 1:
                    ans += x;
                    break;
                case 2:
                    ans -= x;
                    break;
                case 3:
                    a[z] = x;
                    z += 1;
                    
            }
        }
    }
    printf("answer : %d", ans);
    return 0;
}
