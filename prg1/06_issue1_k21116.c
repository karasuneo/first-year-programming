//
//  06_issue1_k21116.c
//  
//
//  Created by k21116kk on 2021/05/20.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int i, j, x;
    double height, sum, average;
    sum = 0;
    printf("人数をxに入力してください\nx? ");
    scanf("%d", &x);
    printf("%d人の身長を入力してください。\n", x);
    for(i=1; i<=x; ++i){
        printf("%d人目は? ", i);
        scanf("%lf", &height);
        sum = sum + height;
        
    }
    average = sum / x;
    printf("平均身長は%lfです。", average);
    return 0;
}
