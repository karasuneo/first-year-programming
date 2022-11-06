//
//  beta.c
//  
//
//  Created by k21116kk on 2021/06/15.
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
            false:
                x = ch - '0';
                a[z] = x;
                z++;
                x = 0;
                if(y = 1)
                    for(i = z; i >= 0; i--){
                        a[z] = a[z] * 10 ^ i;
                        x += a[z]
                        z--;
                        
                    }
        printf("%d", x);
    return 0;
}
