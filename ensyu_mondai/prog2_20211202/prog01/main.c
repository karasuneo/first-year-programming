//
//  main.c
//  prog01
//
//  Created by k21116kk on 2021/12/02.
//

#include <stdio.h>

struct place {
    double lon;
    double lat;
    char add[64];
};
int main(int argc, const char * argv[]) {
    struct place p1={35.1830169, 137.1121831, "愛知県豊田市八草町八千草１２４７"};;
    struct place p2={35.1785559, 136.9490965, "愛知県名古屋市千種区北千種３丁目４－１７"};
    printf("愛工大は \n");
    printf("緯度 : %lf \n", p1.lon);
    printf("経度 : %lf \n", p1.lat);
    printf("住所 : %s \n", p1.add);
    printf("名電は \n");
    printf("緯度 : %lf \n", p2.lon);
    printf("経度 : %lf \n", p2.lat);
    printf("住所 : %s \n", p2.add);
    return 0;
}
