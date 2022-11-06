//
//  main.c
//  exercise1
//
//  Created by k21116kk on 2021/11/22.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double avg(double value[], int n) {
    double sum = 0;
    for (int i = 0; i<n; i++)
        sum += value[i];
    return sum / n;
}

double dev(double value[], int n) {
    double x = avg(value, n);
    double var = 0;
    for (int i = 0; i < n; i++)
        var += (value[i] - x) * (value[i] - x);
    return sqrt(var/n);
}

double pro(double stan_div, double ave) {
    double z_one = (50-ave) / stan_div;
    double z_two = (49-ave) / stan_div;
    double p_one = 0.5 * erf(fabs(z_one) / sqrt(2.0));
    double p_two = 0.5 * erf(fabs(z_two) / sqrt(2.0));
    double p_dif = fabs(p_one - p_two);
    return  p_dif;
}

int main(int argc, const char * argv[]) {
    double *point;
    double num_people, ave, stan_div, prob;
    printf("num_people? ");
    scanf("%lf", &num_people);
    point = (double*)malloc(sizeof(double)*1);
    for (int i=0; i<num_people; i++) {
        printf("点数を入力してください ");
        scanf("%lf", &point[i]);
        point = (double*)realloc(point,sizeof(double)*1);
    }
    ave = avg(point, num_people);
    stan_div = dev(point, num_people);
    prob = pro(stan_div, ave);
    printf("平均値 : %lf \n", ave);
    printf("標準偏差 : %lf \n", stan_div);
    printf("求める確率 : %lf \n", prob);
    free(point);
    return 0;
}
//return (0.5 * erf(fabs(z_one) / sqrt(2.0))) - (0.5 * erf(fabs(z_two) / sqrt(2.0)));
