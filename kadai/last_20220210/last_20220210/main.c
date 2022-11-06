//
//  main.c
//  last_20220210
//
//  Created by k21116kk on 2022/02/09.
//


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 256

typedef struct num_inf_pep {
    char date[20];
    int all;
    int pre[47];
} Num_inf_pep;

void printNum_inf_pep(Num_inf_pep nip) {
    printf("%s, %d, ", nip.date, nip.all);
    for (int i=0; i<47; i++) {
        printf("%d", nip.pre[i]);
        if (i<46) {
            printf(", ");
        }
    }
    printf("\n");
}

void printasterisk(int quantity) {
    for (int i=0; i<quantity; i++) {
        printf("*");
    }
}

int main(int argc, const char * argv[]) {
    int num=0;
    int num_2=0;
    int per[47];
    Num_inf_pep array[754];
    FILE *fp;
    char date[20];
    char line[MAX];
    fp=fopen("newly_confirmed_cases_daily.csv", "r");
    if (fp==NULL) {
        printf("Cannot open the file \n");
        exit(0);
    }
    while (fgets(line, MAX, fp) != NULL) {
        Num_inf_pep nip;
        char *value=strtok(line, ", \n");
        strcpy(nip.date, value);
        value=strtok(NULL, ",\n");
        nip.all=atoi(value);
        value=strtok(NULL, ",\n");
        for (int i=0; i<47; i++) {
            nip.pre[i]=atoi(value);
            value=strtok(NULL, ",\n");
        }
        
        array[num]=nip;
        num++;
    }
    fclose(fp);
    
    printf("知りたい感染者数の年と日付を ????/?/?? で入力してください\n");
    scanf("%s", date);
    printf("%s\n", date);
    for (int i=0; i<num; i++) {
        if (strcmp(array[i].date, date) == 0) {
            num_2=i;
            break;
        }
    }
    for (int i=0; i<47; i++) {
        per[i]=array[num_2].pre[i]*100/array[num_2].all;
    }
    printf("全国の感染者数：%d\n", array[num_2].all);
    printf("北海道：");
    printasterisk(per[0]);
    printf("(%d)\n", array[num_2].pre[0]);
    printf("青森県：");
    printasterisk(per[1]);
    printf("(%d)\n", array[num_2].pre[1]);
    printf("岩手県：");
    printasterisk(per[2]);
    printf("(%d)\n", array[num_2].pre[2]);
    printf("宮城県：");
    printasterisk(per[3]);
    printf("(%d)\n", array[num_2].pre[3]);
    printf("秋田県：");
    printasterisk(per[4]);
    printf("(%d)\n", array[num_2].pre[4]);
    printf("山形県：");
    printasterisk(per[5]);
    printf("(%d)\n", array[num_2].pre[5]);
    printf("福島県：");
    printasterisk(per[6]);
    printf("(%d)\n", array[num_2].pre[6]);
    printf("茨城県：");
    printasterisk(per[7]);
    printf("(%d)\n", array[num_2].pre[7]);
    printf("栃木県：");
    printasterisk(per[8]);
    printf("(%d)\n", array[num_2].pre[8]);
    printf("群馬県：");
    printasterisk(per[9]);
    printf("(%d)\n", array[num_2].pre[9]);
    printf("埼玉県：");
    printasterisk(per[10]);
    printf("(%d)\n", array[num_2].pre[10]);
    printf("千葉県：");
    printasterisk(per[11]);
    printf("(%d)\n", array[num_2].pre[11]);
    printf("東京都：");
    printasterisk(per[12]);
    printf("(%d)\n", array[num_2].pre[12]);
    printf("神奈川県：");
    printasterisk(per[13]);
    printf("(%d)\n", array[num_2].pre[13]);
    printf("新潟県：");
    printasterisk(per[14]);
    printf("(%d)\n", array[num_2].pre[14]);
    printf("富山県：");
    printasterisk(per[15]);
    printf("(%d)\n", array[num_2].pre[15]);
    printf("石川県：");
    printasterisk(per[16]);
    printf("(%d)\n", array[num_2].pre[16]);
    printf("福井県：");
    printasterisk(per[17]);
    printf("(%d)\n", array[num_2].pre[17]);
    printf("山梨県：");
    printasterisk(per[18]);
    printf("(%d)\n", array[num_2].pre[18]);
    printf("長野県：");
    printasterisk(per[19]);
    printf("(%d)\n", array[num_2].pre[19]);
    printf("岐阜県：");
    printasterisk(per[20]);
    printf("(%d)\n", array[num_2].pre[20]);
    printf("静岡県：");
    printasterisk(per[21]);
    printf("(%d)\n", array[num_2].pre[21]);
    printf("愛知県：");
    printasterisk(per[22]);
    printf("(%d)\n", array[num_2].pre[22]);
    printf("三重県：");
    printasterisk(per[23]);
    printf("(%d)\n", array[num_2].pre[23]);
    printf("滋賀県：");
    printasterisk(per[24]);
    printf("(%d)\n", array[num_2].pre[24]);
    printf("京都府：");
    printasterisk(per[25]);
    printf("(%d)\n", array[num_2].pre[25]);
    printf("大阪府：");
    printasterisk(per[26]);
    printf("(%d)\n", array[num_2].pre[26]);
    printf("兵庫県：");
    printasterisk(per[27]);
    printf("(%d)\n", array[num_2].pre[27]);
    printf("奈良県：");
    printasterisk(per[28]);
    printf("(%d)\n", array[num_2].pre[28]);
    printf("和歌山県：");
    printasterisk(per[29]);
    printf("(%d)\n", array[num_2].pre[29]);
    printf("鳥取県：");
    printasterisk(per[30]);
    printf("(%d)\n", array[num_2].pre[30]);
    printf("島根県：");
    printasterisk(per[31]);
    printf("(%d)\n", array[num_2].pre[31]);
    printf("岡山県：");
    printasterisk(per[32]);
    printf("(%d)\n", array[num_2].pre[32]);
    printf("広島県：");
    printasterisk(per[33]);
    printf("(%d)\n", array[num_2].pre[33]);
    printf("山口県：");
    printasterisk(per[34]);
    printf("(%d)\n", array[num_2].pre[34]);
    printf("徳島県：");
    printasterisk(per[35]);
    printf("(%d)\n", array[num_2].pre[35]);
    printf("香川県：");
    printasterisk(per[36]);
    printf("(%d)\n", array[num_2].pre[36]);
    printf("愛媛県：");
    printasterisk(per[37]);
    printf("(%d)\n", array[num_2].pre[37]);
    printf("高知県：");
    printasterisk(per[38]);
    printf("(%d)\n", array[num_2].pre[38]);
    printf("福岡県：");
    printasterisk(per[39]);
    printf("(%d)\n", array[num_2].pre[39]);
    printf("佐賀県：");
    printasterisk(per[40]);
    printf("(%d)\n", array[num_2].pre[40]);
    printf("長崎県：");
    printasterisk(per[41]);
    printf("(%d)\n", array[num_2].pre[41]);
    printf("熊本県：");
    printasterisk(per[42]);
    printf("(%d)\n", array[num_2].pre[42]);
    printf("大分県：");
    printasterisk(per[43]);
    printf("(%d)\n", array[num_2].pre[43]);
    printf("宮崎県：");
    printasterisk(per[44]);
    printf("(%d)\n", array[num_2].pre[44]);
    printf("鹿児島県：");
    printasterisk(per[45]);
    printf("(%d)\n", array[num_2].pre[45]);
    printf("沖縄県：");
    printasterisk(per[46]);
    printf("(%d)\n", array[num_2].pre[46]);
    return 0;
}
