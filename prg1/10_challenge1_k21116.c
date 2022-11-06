//
//  10_challenge1_k21116.c
//  
//
//  Created by k21116kk on 2021/06/17.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int a[100];
    int l = 0;
    int y = 0;
    for(int i = 2; i < 100; i++){
        for(int j = 0; j < l; j++){
            if(i%a[j] == 0){
                y = 1;
                break;
            }
        }
        if(y == 0){
            a[l] = i;
            l++;
        }
        y =0;
    }
    for(int i = 0 ; i < l; i++){
        printf("%d\n", a[i]);
    }
    return 0;
 }
