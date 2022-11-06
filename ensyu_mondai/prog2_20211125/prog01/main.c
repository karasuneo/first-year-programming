//
//  main.c
//  prog01
//
//  Created by k21116kk on 2021/11/25.
//

#include <stdio.h>

typedef struct studnt {
    char name[64];
    int age;
    char id[9];
    int grade;
} STUDENT;

int main(int argc, const char * argv[]) {
    STUDENT s1 = {"takesi", 15, "k2000", 3};
    STUDENT s2 = {"tarou", 22, "k2111", 4};
    STUDENT s3 = {"hanako", 9, "k2333", 2};
    printf("1人目は \n");
    printf("名前 : %s \n", s1.name);
    printf("年齢: %d \n", s1.age);
    printf("学籍番号 : %s \n", s1.id);
    printf("学年 : %d \n", s1.grade);
    printf("2人目は \n");
    printf("名前 : %s \n", s2.name);
    printf("年齢: %d \n", s2.age);
    printf("学籍番号 : %s \n", s2.id);
    printf("学年 : %d \n", s2.grade);
    printf("3人目は \n");
    printf("名前 : %s \n", s3.name);
    printf("年齢: %d \n", s3.age);
    printf("学籍番号 : %s \n", s3.id);
    printf("学年 : %d \n", s3.grade);
    
    return 0;
}
