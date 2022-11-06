//
//  main.c
//  prog12/main.c
//
//  Created by k21116kk on 2021/09/30.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    double hei, wei, bmi;
    printf("身長を入力してください ");
    scanf("%lf", &hei);
    printf("体重を入力してください ");
    scanf("%lf", &wei);
    hei = hei/100;
    bmi = wei / (hei * hei);
    
    printf("肥満度は");
    if (bmi < 18.5) {
        printf("やせ");
    }
    if (18.5 <= bmi && bmi < 25) {
        printf("標準");
    }
    if (25 <= bmi && bmi < 30) {
        printf("肥満");
    }
    if (30 <= bmi) {
        printf("高度肥満");
    }
    printf("です\n");
    return 0;
}
