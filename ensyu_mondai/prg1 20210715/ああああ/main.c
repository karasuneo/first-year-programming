//
//  main.c
//  ああああ
//
//  Created by k21116kk on 2021/07/26.
//

#include <stdio.h>
#include <string.h>

#define EMPTY 0;
#define RYOKEN1 1;
#define RYOKEN2 2;
#define RYOKEN3 3;
#define USAGI 4;
#define YOKOSEM 5;
#define TATESEN 6;
#define MIGIUESEN 7;
#define MIGISITASEN 8;
#define MARU1 9;
#define MARU2 10;
#define MARU3 11;
#define MARU4 12;
#define MARU5 13;
#define MARU6 14;
#define MARU7 15;
#define MARU8 16;
#define MARU9 17;
#define MARU10 18;
#define MARU11 19;
//このゲームで使う記号の定義
int ban[5][9];//このゲームで使う盤面の定義
int hantei;//main関数においては勝敗の判定、inumove,usagimoveにおいては正しい数字が入力されたかを判定する数字
void syokika(void){//ゲームを始めるための関数
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 9; j++) {
            ban[i][j] = EMPTY;
            //使用する盤面を一度すべて初期化
        }
    }
    ban[0][2] = RYOKEN1;
    ban[2][0] = RYOKEN2;
    ban[4][2] = RYOKEN3;
    ban[2][8] = USAGI;
    ban[0][3] = YOKOSEM;
    ban[0][5] = YOKOSEM;
    ban[2][1] = YOKOSEM;
    ban[2][3] = YOKOSEM;
    ban[2][5] = YOKOSEM;
    ban[2][7] = YOKOSEM;
    ban[4][3] = YOKOSEM;
    ban[4][5] = YOKOSEM;
    ban[1][2] = TATESEN;
    ban[3][2] = TATESEN;
    ban[1][4] = TATESEN;
    ban[3][4] = TATESEN;
    ban[1][6] = TATESEN;
    ban[3][6] = TATESEN;
    ban[1][1] = MIGIUESEN;
    ban[1][3] = MIGISITASEN;
    ban[1][5] = MIGIUESEN;
    ban[3][3] = MIGIUESEN;
    ban[3][5] = MIGISITASEN;
    ban[3][1] = MIGISITASEN;
    ban[1][7] = MIGISITASEN;
    ban[3][7] = MIGIUESEN;
    ban[0][4] = MARU2;
    ban[0][6] = MARU3;
    ban[2][2] = MARU5;
    ban[2][4] = MARU6;
    ban[2][6] = MARU7;
    ban[4][4] = MARU10;
    ban[4][6] = MARU11;
    //最初の盤面の配置
}
void hyouzi(void){
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 9; j++) {
            switch (ban[i][j]) {
                case 1://RYOKEN1(0行目)の配置
                    if (i == 0 && j == 2){//ban[0][2]の時1文字分あける
                        printf(" ");
                    }else if (i == 4 && j == 2){//ban[4][2]の時1文字分あける
                        printf(" ");
                    }
                    printf("🐕");
                    if (i == 2 && j == 8) {//ban[2][8]にRYOKEN1がいる時のみ改行
                        printf("\n");
                    }
                    break;
                case 2://RYOKEN2(2行目)の配置
                    if (i == 0 && j == 2){//ban[0][2]の時1文字分あける
                        printf(" ");
                    }else if (i == 4 && j == 2){//ban[4][2]の時1文字分あける
                        printf(" ");
                    }
                    printf("🐕‍🦺");
                    if (i == 2 && j == 8) {//ban[2][8]にRYOKEN2がいる時のみ改行
                        printf("\n");
                    }
                    break;
                case 3://RYOKEN3(4行目)の配置
                    if (i == 0 && j == 2){//ban[0][2]の時1文字分あける
                        printf(" ");
                    }else if (i == 4 && j == 2){//ban[4][2]の時1文字分あける
                        printf(" ");
                    }
                    printf("🐩");
                    if (i == 2 && j == 8) {//ban[2][8]にRYOKEN3がいる時のみ改行
                        printf("\n");
                    }
                    break;
                case 4://USAGIの配置
                    if (i == 0 && j == 2){//ban[0][2]の時1文字分あける
                        printf(" ");
                    }else if (i == 4 && j == 2){//ban[4][2]の時1文字分あける
                        printf(" ");
                    }
                    printf("🐰");
                    if (i == 2 && j == 8) {//ban[2][8]にUSAGIがいる時のみ改行
                        printf("\n");
                    }
                    break;
                case 5://YOKOSENの配置
                    printf(" ー");
                    break;
                case 6://TATESENの配置
                    printf(" |");
                    break;
                case 7://MIGIUESENの配置
                    printf(" ／");
                    break;
                case 8://MIGISITASENの配置
                    printf(" ＼");
                    break;
                case 9://MARU1の配置
                    printf("  ①");
                    break;
                case 10://MARU2の配置
                    printf(" ②");
                    break;
                case 11://MARU3の配置
                    printf(" ③");
                    break;
                case 12://MARU4の配置
                    printf("④");
                    break;
                case 13://MARU5の配置
                    printf("⑤");
                    break;
                case 14://MARU6の配置
                    printf("⑥");
                    break;
                case 15://MARU7の配置
                    printf(" ⑦");
                    break;
                case 16://MARU8の配置
                    printf("⑧\n");
                    break;
                case 17://MARU9の配置
                    printf("  ⑨");
                    break;
                case 18://MARUの10配置
                    printf(" ⑩");
                    break;
                case 19://MARU11の配置
                    printf(" ⑪");
                    break;
                default://EMPTYの配置
                    if (j == 8) {
                        printf("\n");
                    }else{
                        printf(" ");
                    }
                    break;
            }
        }
    }
}
void inu1move(void){//RYOKEN1(茶色の犬)を動かすための関数
    int position;
    hantei = 0;
    while (hantei == 0) {
        printf("猟犬をどこに動かす？番号を入力してね！\n");
        printf("(今いるマスから線が繋がっている場所に前または横1マス移動できます)");
        scanf("%d", &position);//移動したいマスへの入力
       if (ban[0][2] == 1) {//このマスにRYOKEN1がいるときの動き
            if (position == 2) {//移動したいマスがこの番号(ban[0][4])だったとき
                if (ban[0][4] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[0][4] == 2 || ban[0][4] == 3) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else{
                    ban[0][4] = RYOKEN1;
                    ban[0][2] = MARU1;
                    hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 5){//移動したいマスがこの番号(ban[2][2])だったとき
                if (ban[2][2] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[2][2] == 2 || ban[2][2] == 3) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else{
                    ban[2][2] = RYOKEN1;
                    ban[0][2] = MARU1;
                    hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
           if (position == 6){//移動したいマスがこの番号(ban[2][4])だったとき
               if (ban[2][4] == 4){//移動した先がRYOKENのいるマスだったとき
                   printf("そのマスには移動できません.もう一度入力してください\n");
                   hantei = 0;
               }else if (ban[2][2] == 2 || ban[2][2] == 3) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else{
                    ban[2][4] = RYOKEN1;
                    ban[0][2] = MARU1;
                   hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                   hantei = 1;
                   break;
               }
           }
                if (position != 2 && position != 5 && position != 6) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }
            }
        if (ban[0][4] == 1){//このマスにRYOKEN1がいるときの動き
            if (position == 3){//移動したいマスがこの番号(ban[0][6])だったとき
                if (ban[0][6] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[0][6] == 2 || ban[0][6] == 3) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                }else{
                    ban[0][6] = RYOKEN1;
                    ban[0][4] = MARU2;
                    hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 6){//移動したいマスがこの番号(ban[2][4])だったとき
                if (ban[2][4] == 4){//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[2][4] == 2 || ban[2][4] == 3) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                }else{
                    ban[2][4] = RYOKEN1;
                    ban[0][4] = MARU2;
                    hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if(position != 3 && position != 6) {
                printf("そのマスには移動できません.もう一度入力してください\n");
                hantei = 0;
            }
        }
       if (ban[0][6] == 1) {//このマスにRYOKEN1がいるときの動き
            if (position == 7){//移動したいマスがこの番号(ban[2][6])だったとき
                if (ban[2][6] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[2][6] == 2 || ban[2][6] == 3) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                 }else{
                    ban[2][6] = RYOKEN1;
                    ban[0][6] = MARU3;
                    hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
           if (position == 8){//移動したいマスがこの番号(ban[2][8])だったとき
               if (ban[2][8] == 4){//移動した先がUSAGIのいるマスだったとき
                   printf("そのマスには移動できません.もう一度入力してください\n");
                   hantei = 0;
               }else if (ban[2][8] == 2 || ban[2][8] == 3) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
               }else{
                   ban[2][8] = RYOKEN1;
                   ban[0][6] = MARU3;
                   hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                   hantei = 1;
                   break;
               }
           }
                if (position != 7 && position != 8) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }
            }
       if(ban[2][2] == 1) {//このマスにRYOKEN1がいるときの動き
           if (position == 1){//移動したいマスがこの番号(ban[4][2])だったとき
               if (ban[0][2] == 4) {//移動した先がUSAGIのいるマスだったとき
                   printf("そのマスには移動できません.もう一度入力してください\n");
                   hantei = 0;
               }else if (ban[0][2] == 2 || ban[0][2] == 3) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
               }else{
                   ban[0][2] = RYOKEN1;
                   ban[2][2] = MARU5;
                   hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                   hantei = 1;
                   break;
               }
           }
            if (position == 6){//移動したいマスがこの番号(ban[2][4])だったとき
                if (ban[2][4] == 4){//移動した先がRYOKENのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[2][4] == 2 || ban[2][4] == 3) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                }else{
                    ban[2][4] = RYOKEN1;
                    ban[2][2] = MARU5;
                    hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
             if (position == 9){//移動したいマスがこの番号(ban[4][2])だったとき
                 if (ban[4][2] == 4) {//移動した先がUSAGIのいるマスだったとき
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                 }else if (ban[4][2] == 2 || ban[4][2] == 3) {
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                 }else{
                     ban[4][2] = RYOKEN1;
                     ban[2][2] = MARU5;
                     hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                     hantei = 1;
                     break;
                 }
             }
                 if (position != 1 && position != 6 && position != 9) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                 }
             }
        if (ban[2][4] == 1){//このマスにRYOKEN1がいるときの動き
            if (position == 2) {//移動したいマスがこの番号(ban[0][4])だったとき
                if (ban[0][4] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[0][4] == 2 || ban[0][4] == 3) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                 }else{
                    ban[0][4] = RYOKEN1;
                    ban[2][4] = MARU6;
                    hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 3){//移動したいマスがこの番号(ban[0][6])だったとき
                if (ban[0][6] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[0][6] == 2 || ban[0][6] == 3) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                }else{
                    ban[0][6] = RYOKEN1;
                    ban[2][4] = MARU6;
                    hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 7){//移動したいマスがこの番号(ban[2][6])だったとき
                if (ban[2][6] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[2][6] == 2 || ban[2][6] == 3) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                }else{
                    ban[2][6] = RYOKEN1;
                    ban[2][4] = MARU6;
                    hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 10){//移動したいマスがこの番号(ban[4][4])だったとき
                  if (ban[4][4] == 4) {//移動した先がUSAGIのいるマスだったとき
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else if (ban[4][4] == 2 || ban[4][4] == 3) {
                       printf("そのマスには移動できません.もう一度入力してください\n");
                       hantei = 0;
                  }else{
                      ban[4][4] = RYOKEN1;
                      ban[2][4] = MARU6;
                      hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                      hantei = 1;
                      break;
                  }
              }
            if (position == 11){//移動したいマスがこの番号(ban[4][6])だったとき
                  if (ban[4][6] == 4) {//移動した先がUSAGIのいるマスだったとき
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else if (ban[4][6] == 2 || ban[4][6] == 3) {
                       printf("そのマスには移動できません.もう一度入力してください\n");
                       hantei = 0;
                  }else{
                      ban[4][6] = RYOKEN1;
                      ban[2][4] = MARU6;
                      hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                      hantei = 1;
                      break;
                  }
              }
            if (position != 2 && position != 3 && position != 7 && position != 10 && position != 11) {
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }
              }
        if (ban[2][6] == 1){//このマスにRYOKEN1がいるときの動き
            if (position == 3){//移動したいマスがこの番号(ban[0][6])だったとき
                if (ban[0][6] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[0][6] == 2 || ban[0][6] == 3) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                }else{
                    ban[0][6] = RYOKEN1;
                    ban[2][6] = MARU7;
                    hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 8){//移動したいマスがこの番号(ban[2][8])だったとき
                if (ban[2][8] == 4){//移動した先がRYOKENのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[2][8] == 2 || ban[2][8] == 3) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else{
                    ban[2][8] = RYOKEN1;
                    ban[2][6] = MARU7;
                    hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 11){//移動したいマスがこの番号(ban[4][6])だったとき
                  if (ban[4][6] == 4) {//移動した先がUSAGIのいるマスだったとき
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else if (ban[4][6] == 2 || ban[4][6] == 3) {
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else{
                      ban[4][6] = RYOKEN1;
                      ban[2][6] = MARU7;
                      hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                      hantei = 1;
                      break;
                  }
              }
                  if (position != 3 && position != 8 && position != 11) {
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }
        }
        if (ban[2][8] == 1){//このマスにRYOKEN1がいるときの動き
            printf("猟犬はこのマスからは動けません.やり直してください\n");
            hantei = 3;
        }
        if (ban[4][2] == 1){//このマスにUSAGIがいるときの動き
            if (position == 5){//移動したいマスがこの番号(ban[2][2])だったとき
                if (ban[2][2] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[2][2] == 2 || ban[2][2] == 3) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else{
                    ban[2][2] = RYOKEN1;
                    ban[4][2] = MARU9;
                    hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
           if (position == 6){//移動したいマスがこの番号(ban[2][4])だったとき
               if (ban[2][4] == 4){//移動した先がUSAGIのいるマスだったとき
                   printf("そのマスには移動できません.もう一度入力してください\n");
                   hantei = 0;
               }else if (ban[2][4] == 2 || ban[2][4] == 3) {
                   printf("そのマスには移動できません.もう一度入力してください\n");
                   hantei = 0;
               }else{
                   ban[2][4] = RYOKEN1;
                   ban[4][2] = MARU9;
                   hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                   hantei = 1;
                   break;
               }
           }
            if (position == 10){//移動したいマスがこの番号(ban[4][4])だったとき
                  if (ban[4][4] == 4) {//移動した先がUSAGIのいるマスだったとき
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else if (ban[4][4] == 2 || ban[4][4] == 3) {
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else{
                      ban[4][4] = RYOKEN1;
                      ban[4][2] = MARU9;
                      hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                      hantei = 1;
                      break;
                  }
              }
                if (position != 5 && position != 6 && position != 10) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }
            }
        if (ban[4][4] == 1){//このマスにRYOKEN1がいるときの動き
            if (position == 6){//移動したいマスがこの番号(ban[2][4])だったとき
                if (ban[2][4] == 4){//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[2][4] == 2 || ban[2][4] == 3) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else{
                    ban[2][4] = RYOKEN1;
                    ban[4][4] = MARU10;
                    hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 11){//移動したいマスがこの番号(ban[4][6])だったとき
                  if (ban[4][6] == 4) {//移動した先がUSAGIのいるマスだったとき
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else if (ban[4][6] == 2 || ban[4][6] == 3) {
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else{
                      ban[4][6] = RYOKEN1;
                      ban[4][4] = MARU10;
                      hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                      hantei = 1;
                      break;
                  }
              }
            if(position != 6 && position != 11) {
                printf("そのマスには移動できません.もう一度入力してください\n");
                hantei = 0;
            }
        }
        if (ban[4][6] == 1){//このマスにUSAGIがいるときの動き
             if (position == 7){//移動したいマスがこの番号(ban[2][6])だったとき
                 if (ban[2][6] == 4) {//移動した先がUSAGIのいるマスだったとき
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                 }else if (ban[2][6] == 2 || ban[2][6] == 3) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                 }else{
                     ban[2][6] = RYOKEN1;
                     ban[4][6] = MARU11;
                     hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                     hantei = 1;
                     break;
                 }
             }
            if (position == 8){//移動したいマスがこの番号(ban[2][8])だったとき
                if (ban[2][8] == 4){//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[2][8] == 2 || ban[2][8] == 3) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else{
                    ban[2][8] = RYOKEN1;
                    ban[4][6] = MARU11;
                    hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 10){//移動したいマスがこの番号(ban[4][4])だったとき
                  if (ban[4][4] == 4) {//移動した先がUSAGIのいるマスだったとき
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else if (ban[4][4] == 2 || ban[4][4] == 3) {
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else{
                      ban[4][4] = RYOKEN1;
                      ban[4][6] = MARU11;
                      hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                      hantei = 1;
                      break;
                  }
              }
                 if (position != 6 && position != 7 && position != 8) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                 }
             }
    }
}
void inu2move(void){//RYOKEN2(黒い犬)を動かすための関数
    int position;
    hantei = 0;//RYOKEN2の移動するマスがルールに従っているかの判定をする変数
    while (hantei == 0) {
        printf("猟犬をどこに動かす？番号を入力してね！\n");
        printf("(今いるマスから線が繋がっている場所に前または横1マス移動できます)");
        scanf("%d", &position);//移動したいマスへの入力
        if (ban[0][2] == 2){//このマスにRYOKEN2がいるときの動き
            if (position == 2) {//移動したいマスがこの番号(ban[0][4])だったとき
                if (ban[0][4] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[0][4] == 1 || ban[0][4] == 3) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else{
                    ban[0][4] = RYOKEN2;
                    ban[0][2] = MARU1;
                    hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 5){//移動したいマスがこの番号(ban[2][2])だったとき
                if (ban[2][2] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[2][2] == 1 || ban[2][2] == 3) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else{
                    ban[2][2] = RYOKEN2;
                    ban[0][2] = MARU1;
                    hyouzi();//RYOKEN2とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
           if (position == 6){//移動したいマスがこの番号(ban[2][4])だったとき
               if (ban[2][4] == 4){//移動した先がRYOKENのいるマスだったとき
                   printf("そのマスには移動できません.もう一度入力してください\n");
                   hantei = 0;
               }else if (ban[2][4] == 1 || ban[2][4] == 3) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else{
                    ban[2][4] = RYOKEN2;
                    ban[0][2] = MARU1;
                   hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                   hantei = 1;
                   break;
               }
           }
                if (position != 2 && position != 5 && position != 6) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }
            }
        if (ban[0][4] == 2){//このマスにRYOKEN2がいるときの動き
            if (position == 3){//移動したいマスがこの番号(ban[0][6])だったとき
                if (ban[0][6] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[0][6] == 1 || ban[0][6] == 3) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                }else{
                    ban[0][6] = RYOKEN2;
                    ban[0][4] = MARU2;
                    hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 6){//移動したいマスがこの番号(ban[2][4])だったとき
                if (ban[2][4] == 4){//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[2][4] == 1 || ban[2][4] == 3) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                }else{
                    ban[2][4] = RYOKEN2;
                    ban[0][4] = MARU2;
                    hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if(position != 3 && position != 6) {
                printf("そのマスには移動できません.もう一度入力してください\n");
                hantei = 0;
            }
        }
       if (ban[0][6] == 2) {//このマスにRYOKEN1がいるときの動き
            if (position == 7){//移動したいマスがこの番号(ban[2][6])だったとき
                if (ban[2][6] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[2][6] == 1 || ban[2][6] == 3) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                 }else{
                    ban[2][6] = RYOKEN2;
                    ban[0][6] = MARU3;
                    hyouzi();//RYOKEN1とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
           if (position == 8){//移動したいマスがこの番号(ban[2][8])だったとき
               if (ban[2][8] == 4){//移動した先がUSAGIのいるマスだったとき
                   printf("そのマスには移動できません.もう一度入力してください\n");
                   hantei = 0;
               }else if (ban[2][8] == 1 || ban[2][8] == 3) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
               }else{
                   ban[2][8] = RYOKEN2;
                   ban[0][6] = MARU3;
                   hyouzi();//RYOKEN2とさっきいたマスを入れ替えた後、再び表示
                   hantei = 1;
                   break;
               }
           }
                if (position != 7 && position != 8) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }
            }
        if (ban[2][2] == 2){
           if (position == 1) {//移動したいマスがこの番号(ban[0][2])だったとき
               if (ban[0][2] == 4) {//移動した先がUSAGIのいるマスだったとき
                   printf("そのマスには移動できません.もう一度入力してください\n");
                   hantei = 0;
               }else if (ban[0][2] == 1 || ban[0][2] == 3) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                   
               }else{
                   ban[0][2] = RYOKEN2;
                   ban[2][2] = MARU5;
                   hyouzi();//RYOKEN2とさっきいたマスを入れ替えた後、再び表示
                   hantei = 1;
                   break;
               }
           }
            if (position == 6){//移動したいマスがこの番号(ban[2][4])だったとき
                if (ban[2][4] == 4){//移動した先がRYOKENのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[2][4] == 1 || ban[2][4] == 3) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                }else{
                    ban[2][4] = RYOKEN2;
                    ban[2][2] = MARU5;
                    hyouzi();//RYOKEN2とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
             if (position == 9){//移動したいマスがこの番号(ban[4][2])だったとき
                 if (ban[4][2] == 4) {//移動した先がUSAGIのいるマスだったとき
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                 }else if (ban[4][2] == 1 || ban[4][2] == 3) {
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                 }else{
                     ban[4][2] = RYOKEN2;
                     ban[2][2] = MARU5;
                     hyouzi();//RYOKEN2とさっきいたマスを入れ替えた後、再び表示
                     hantei = 1;
                     break;
                 }
             }
                 if (position != 1 && position != 6 && position != 9) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                 }
        }
        if (ban[2][0] == 2){//このマスにRYOKEN2がいるときの動き
            if (position == 1) {//移動したいマスがこの番号(ban[0][4])だったとき
                if (ban[0][2] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[0][2] == 1 || ban[0][2] == 3) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                 }else{
                    ban[0][2] = RYOKEN2;
                    ban[2][0] = MARU4;
                    hyouzi();//RYOKEN2とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 5){//移動したいマスがこの番号(ban[2][2])だったとき
                if (ban[2][2] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[2][2] == 1 || ban[2][2] == 3) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                }else{
                    ban[2][2] = RYOKEN2;
                    ban[2][0] = MARU4;
                    hyouzi();//RYOKEN2とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 9){//移動したいマスがこの番号(ban[4][2])だったとき
                if (ban[4][2] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[4][2] == 1 || ban[4][2] == 3) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                }else{
                    ban[4][2] = RYOKEN2;
                    ban[2][0] = MARU4;
                    hyouzi();//RYOKEN2とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position != 1 && position != 5 && position != 9) {
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }
              }
        if (ban[2][4] == 2){//このマスにRYOKEN2がいるときの動き
            if (position == 2) {//移動したいマスがこの番号(ban[0][4])だったとき
                if (ban[0][4] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[0][4] == 1 || ban[0][4] == 3) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                 }else{
                    ban[0][4] = RYOKEN2;
                    ban[2][4] = MARU6;
                    hyouzi();//RYOKEN2とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 3){//移動したいマスがこの番号(ban[0][6])だったとき
                if (ban[0][6] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[0][6] == 1 || ban[0][6] == 3) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                }else{
                    ban[0][6] = RYOKEN2;
                    ban[2][4] = MARU6;
                    hyouzi();//RYOKEN2とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 7){//移動したいマスがこの番号(ban[2][6])だったとき
                if (ban[2][6] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[2][6] == 1 || ban[2][6] == 3) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                }else{
                    ban[2][6] = RYOKEN2;
                    ban[2][4] = MARU6;
                    hyouzi();//RYOKEN2とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 10){//移動したいマスがこの番号(ban[4][4])だったとき
                  if (ban[4][4] == 4) {//移動した先がUSAGIのいるマスだったとき
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else if (ban[4][4] == 1 || ban[4][4] == 3) {
                       printf("そのマスには移動できません.もう一度入力してください\n");
                       hantei = 0;
                  }else{
                      ban[4][4] = RYOKEN2;
                      ban[2][4] = MARU6;
                      hyouzi();//RYOKEN2とさっきいたマスを入れ替えた後、再び表示
                      hantei = 1;
                      break;
                  }
              }
            if (position == 11){//移動したいマスがこの番号(ban[4][6])だったとき
                  if (ban[4][6] == 4) {//移動した先がUSAGIのいるマスだったとき
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else if (ban[4][6] == 1 || ban[4][6] == 3) {
                       printf("そのマスには移動できません.もう一度入力してください\n");
                       hantei = 0;
                  }else{
                      ban[4][6] = RYOKEN2;
                      ban[2][4] = MARU6;
                      hyouzi();//RYOKEN2とさっきいたマスを入れ替えた後、再び表示
                      hantei = 1;
                      break;
                  }
              }
            if (position != 2 && position != 3 && position != 7 && position != 10 && position != 11) {
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }
              }
        if (ban[2][6] == 2){//このマスにRYOKEN2がいるときの動き
            if (position == 3){//移動したいマスがこの番号(ban[0][6])だったとき
                if (ban[0][6] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[0][6] == 1 || ban[0][6] == 3) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                }else{
                    ban[0][6] = RYOKEN2;
                    ban[2][6] = MARU7;
                    hyouzi();//RYOKEN2とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 8){//移動したいマスがこの番号(ban[2][8])だったとき
                if (ban[2][8] == 4){//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[2][8] == 1 || ban[2][8] == 3) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else{
                    ban[2][8] = RYOKEN2;
                    ban[2][6] = MARU7;
                    hyouzi();//RYOKEN2とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 11){//移動したいマスがこの番号(ban[4][6])だったとき
                  if (ban[4][6] == 4) {//移動した先がUSAGIのいるマスだったとき
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else if (ban[4][6] == 1 || ban[4][6] == 3) {
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else{
                      ban[4][6] = RYOKEN2;
                      ban[2][6] = MARU7;
                      hyouzi();//RYOKEN2とさっきいたマスを入れ替えた後、再び表示
                      hantei = 1;
                      break;
                  }
              }
                  if (position != 3 && position != 8 && position != 11) {
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }
        }
        if (ban[2][8] == 2){//このマスにRYOKEN2がいるときの動き
            printf("猟犬はこのマスからは動けません.やり直してください\n");
            hantei = 3;
        }
        if (ban[4][2] == 2){//このマスにRYOKEN2がいるときの動き
            if (position == 5){//移動したいマスがこの番号(ban[2][2])だったとき
                if (ban[2][2] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[2][2] == 1 || ban[2][2] == 3) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else{
                    ban[2][2] = RYOKEN2;
                    ban[4][2] = MARU9;
                    hyouzi();//RYOKEN2とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
           if (position == 6){//移動したいマスがこの番号(ban[2][4])だったとき
               if (ban[2][4] == 4){//移動した先がUSAGIのいるマスだったとき
                   printf("そのマスには移動できません.もう一度入力してください\n");
                   hantei = 0;
               }else if (ban[2][4] == 1 || ban[2][4] == 3) {
                   printf("そのマスには移動できません.もう一度入力してください\n");
                   hantei = 0;
               }else{
                   ban[2][4] = RYOKEN2;
                   ban[4][2] = MARU9;
                   hyouzi();//RYOKEN2とさっきいたマスを入れ替えた後、再び表示
                   hantei = 1;
                   break;
               }
           }
            if (position == 10){//移動したいマスがこの番号(ban[4][4])だったとき
                  if (ban[4][4] == 4) {//移動した先がUSAGIのいるマスだったとき
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else if (ban[4][4] == 1 || ban[4][4] == 3) {
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else{
                      ban[4][4] = RYOKEN2;
                      ban[4][2] = MARU9;
                      hyouzi();//RYOKEN2とさっきいたマスを入れ替えた後、再び表示
                      hantei = 1;
                      break;
                  }
              }
                if (position != 5 && position != 6 && position != 10) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }
            }
        if (ban[4][4] == 2){//このマスにRYOKEN2がいるときの動き
            if (position == 6){//移動したいマスがこの番号(ban[2][4])だったとき
                if (ban[2][4] == 4){//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[2][4] == 1 || ban[2][4] == 3) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else{
                    ban[2][4] = RYOKEN2;
                    ban[4][4] = MARU10;
                    hyouzi();//RYOKEN2とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 11){//移動したいマスがこの番号(ban[4][6])だったとき
                  if (ban[4][6] == 4) {//移動した先がUSAGIのいるマスだったとき
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else if (ban[4][6] == 1 || ban[4][6] == 3) {
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else{
                      ban[4][6] = RYOKEN2;
                      ban[4][4] = MARU10;
                      hyouzi();//RYOKEN2とさっきいたマスを入れ替えた後、再び表示
                      hantei = 1;
                      break;
                  }
              }
            if(position != 6 && position != 11) {
                printf("そのマスには移動できません.もう一度入力してください\n");
                hantei = 0;
            }
        }
        if (ban[4][6] == 2){//このマスにRYOKEN2がいるときの動き
             if (position == 7){//移動したいマスがこの番号(ban[2][6])だったとき
                 if (ban[2][6] == 4) {//移動した先がUSAGIのいるマスだったとき
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                 }else if (ban[2][6] == 1 || ban[2][6] == 3) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                 }else{
                     ban[2][6] = RYOKEN2;
                     ban[4][6] = MARU11;
                     hyouzi();//RYOKEN2とさっきいたマスを入れ替えた後、再び表示
                     hantei = 1;
                     break;
                 }
             }
            if (position == 8){//移動したいマスがこの番号(ban[2][8])だったとき
                if (ban[2][8] == 4){//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[2][8] == 1 || ban[2][8] == 3) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else{
                    ban[2][8] = RYOKEN2;
                    ban[4][6] = MARU11;
                    hyouzi();//RYOKEN2とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 10){//移動したいマスがこの番号(ban[4][4])だったとき
                  if (ban[4][4] == 4) {//移動した先がUSAGIのいるマスだったとき
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else if (ban[4][4] == 1 || ban[4][4] == 3) {
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else{
                      ban[4][4] = RYOKEN2;
                      ban[4][6] = MARU11;
                      hyouzi();//RYOKEN2とさっきいたマスを入れ替えた後、再び表示
                      hantei = 1;
                      break;
                  }
              }
                 if (position != 6 && position != 7 && position != 8) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                 }
             }
    }
}
void inu3move(void){//RYOKEN3(白い犬)を動かすための関数
    int position;
    hantei = 0;//RYOKEN3の移動するマスがルールに従っているかの判定をする変数
    while (hantei == 0) {
        printf("猟犬をどこに動かす？番号を入力してね！\n");
        printf("(今いるマスから線が繋がっている場所に前または横1マス移動できます)");
        scanf("%d", &position);//移動したいマスへの入力
        if (ban[0][2] == 3){//このマスにRYOKEN3がいるときの動き
            if (position == 2) {//移動したいマスがこの番号(ban[0][4])だったとき
                if (ban[0][4] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[0][4] == 1 || ban[0][4] == 2) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else{
                    ban[0][4] = RYOKEN3;
                    ban[0][2] = MARU1;
                    hyouzi();//RYOKEN3とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 5){//移動したいマスがこの番号(ban[2][2])だったとき
                if (ban[2][2] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[2][2] == 1 || ban[2][2] == 2) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else{
                    ban[2][2] = RYOKEN3;
                    ban[0][2] = MARU1;
                    hyouzi();//RYOKEN3とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
           if (position == 6){//移動したいマスがこの番号(ban[2][4])だったとき
               if (ban[2][4] == 4){//移動した先がUSAGIのいるマスだったとき
                   printf("そのマスには移動できません.もう一度入力してください\n");
                   hantei = 0;
               }else if (ban[2][4] == 1 || ban[2][4] == 2) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else{
                    ban[2][4] = RYOKEN3;
                    ban[0][2] = MARU1;
                   hyouzi();//RYOKEN3とさっきいたマスを入れ替えた後、再び表示
                   hantei = 1;
                   break;
               }
           }
                if (position != 2 && position != 5 && position != 6) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }
            }
        if (ban[0][4] == 3){//このマスにRYOKEN3がいるときの動き
            if (position == 3){//移動したいマスがこの番号(ban[0][6])だったとき
                if (ban[0][6] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[0][6] == 1 || ban[0][6] == 2) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                }else{
                    ban[0][6] = RYOKEN3;
                    ban[0][4] = MARU2;
                    hyouzi();//RYOKEN3とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 6){//移動したいマスがこの番号(ban[2][4])だったとき
                if (ban[2][4] == 4){//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[2][4] == 1 || ban[2][4] == 2) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                }else{
                    ban[2][4] = RYOKEN3;
                    ban[0][4] = MARU2;
                    hyouzi();//RYOKEN3とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if(position != 3 && position != 6) {
                printf("そのマスには移動できません.もう一度入力してください\n");
                hantei = 0;
            }
        }
       if (ban[0][6] == 3) {//このマスにRYOKEN3がいるときの動き
            if (position == 7){//移動したいマスがこの番号(ban[2][6])だったとき
                if (ban[2][6] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[2][6] == 1 || ban[2][6] == 2) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                 }else{
                    ban[2][6] = RYOKEN3;
                    ban[0][6] = MARU3;
                    hyouzi();//RYOKEN3とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
           if (position == 8){//移動したいマスがこの番号(ban[2][8])だったとき
               if (ban[2][8] == 4){//移動した先がUSAGIのいるマスだったとき
                   printf("そのマスには移動できません.もう一度入力してください\n");
                   hantei = 0;
               }else if (ban[2][8] == 1 || ban[2][8] == 2) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
               }else{
                   ban[2][8] = RYOKEN3;
                   ban[0][6] = MARU3;
                   hyouzi();//RYOKEN3とさっきいたマスを入れ替えた後、再び表示
                   hantei = 1;
                   break;
               }
           }
                if (position != 7 && position != 8) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }
            }
        if (ban[2][2] == 3){//このマスにRYOKEN3がいるときの動き
           if (position == 1) {//移動したいマスがこの番号(ban[0][2])だったとき
               if (ban[0][2] == 4) {//移動した先がUSAGIのいるマスだったとき
                   printf("そのマスには移動できません.もう一度入力してください\n");
                   hantei = 0;
               }else if (ban[0][2] == 1 || ban[0][2] == 2) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                   
               }else{
                   ban[0][2] = RYOKEN3;
                   ban[2][2] = MARU5;
                   hyouzi();//RYOKEN3とさっきいたマスを入れ替えた後、再び表示
                   hantei = 1;
                   break;
               }
           }
            if (position == 6){//移動したいマスがこの番号(ban[2][4])だったとき
                if (ban[2][4] == 4){//移動した先がRYOKENのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[2][4] == 1 || ban[2][4] == 2) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                }else{
                    ban[2][4] = RYOKEN3;
                    ban[2][2] = MARU5;
                    hyouzi();//RYOKEN3とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
             if (position == 9){//移動したいマスがこの番号(ban[4][2])だったとき
                 if (ban[4][2] == 4) {//移動した先がUSAGIのいるマスだったとき
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                 }else if (ban[4][2] == 1 || ban[4][2] == 2) {
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                 }else{
                     ban[4][2] = RYOKEN3;
                     ban[2][2] = MARU5;
                     hyouzi();//RYOKEN3とさっきいたマスを入れ替えた後、再び表示
                     hantei = 1;
                     break;
                 }
             }
                 if (position != 1 && position != 6 && position != 9) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                 }
        }
        if (ban[2][0] == 3){//このマスにRYOKEN3がいるときの動き
            if (position == 1) {//移動したいマスがこの番号(ban[0][4])だったとき
                if (ban[0][2] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[0][2] == 1 || ban[0][2] == 2) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                 }else{
                    ban[0][2] = RYOKEN3;
                    ban[2][0] = MARU4;
                    hyouzi();//RYOKEN3とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 5){//移動したいマスがこの番号(ban[2][2])だったとき
                if (ban[2][2] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[2][2] == 1 || ban[2][2] == 2) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                }else{
                    ban[2][2] = RYOKEN3;
                    ban[2][0] = MARU4;
                    hyouzi();//RYOKEN3とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 9){//移動したいマスがこの番号(ban[4][2])だったとき
                if (ban[4][2] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[4][2] == 1 || ban[4][2] == 2) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                }else{
                    ban[4][2] = RYOKEN3;
                    ban[2][0] = MARU4;
                    hyouzi();//RYOKEN3とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position != 1 && position != 5 && position != 9) {
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }
              }
        if (ban[2][4] == 3){//このマスにRYOKEN3がいるときの動き
            if (position == 2) {//移動したいマスがこの番号(ban[0][4])だったとき
                if (ban[0][4] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[0][4] == 1 || ban[0][4] == 2) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                 }else{
                    ban[0][4] = RYOKEN3;
                    ban[2][4] = MARU6;
                    hyouzi();//RYOKEN3とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 3){//移動したいマスがこの番号(ban[0][6])だったとき
                if (ban[0][6] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[0][6] == 1 || ban[0][6] == 2) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                }else{
                    ban[0][6] = RYOKEN3;
                    ban[2][4] = MARU6;
                    hyouzi();//RYOKEN3とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 7){//移動したいマスがこの番号(ban[2][6])だったとき
                if (ban[2][6] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[2][6] == 1 || ban[2][6] == 2) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                }else{
                    ban[2][6] = RYOKEN3;
                    ban[2][4] = MARU6;
                    hyouzi();//RYOKEN3とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 10){//移動したいマスがこの番号(ban[4][4])だったとき
                  if (ban[4][4] == 4) {//移動した先がUSAGIのいるマスだったとき
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else if (ban[4][4] == 1 || ban[4][4] == 2) {
                       printf("そのマスには移動できません.もう一度入力してください\n");
                       hantei = 0;
                  }else{
                      ban[4][4] = RYOKEN3;
                      ban[2][4] = MARU6;
                      hyouzi();//RYOKEN3とさっきいたマスを入れ替えた後、再び表示
                      hantei = 1;
                      break;
                  }
              }
            if (position == 11){//移動したいマスがこの番号(ban[4][6])だったとき
                  if (ban[4][6] == 4) {//移動した先がUSAGIのいるマスだったとき
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else if (ban[4][6] == 1 || ban[4][6] == 2) {
                       printf("そのマスには移動できません.もう一度入力してください\n");
                       hantei = 0;
                  }else{
                      ban[4][6] = RYOKEN3;
                      ban[2][4] = MARU6;
                      hyouzi();//RYOKEN3とさっきいたマスを入れ替えた後、再び表示
                      hantei = 1;
                      break;
                  }
              }
            if (position != 2 && position != 3 && position != 7 && position != 10 && position != 11) {
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }
              }
        if (ban[2][6] == 2){//このマスにRYOKEN2がいるときの動き
            if (position == 3){//移動したいマスがこの番号(ban[0][6])だったとき
                if (ban[0][6] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[0][6] == 1 || ban[0][6] == 2) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                }else{
                    ban[0][6] = RYOKEN3;
                    ban[2][6] = MARU7;
                    hyouzi();//RYOKEN3とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 8){//移動したいマスがこの番号(ban[2][8])だったとき
                if (ban[2][8] == 4){//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[2][8] == 1 || ban[2][8] == 2) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else{
                    ban[2][8] = RYOKEN3;
                    ban[2][6] = MARU7;
                    hyouzi();//RYOKEN3とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 11){//移動したいマスがこの番号(ban[4][6])だったとき
                  if (ban[4][6] == 4) {//移動した先がUSAGIのいるマスだったとき
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else if (ban[4][6] == 1 || ban[4][6] == 2) {
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else{
                      ban[4][6] = RYOKEN3;
                      ban[2][6] = MARU7;
                      hyouzi();//RYOKEN3とさっきいたマスを入れ替えた後、再び表示
                      hantei = 1;
                      break;
                  }
              }
                  if (position != 3 && position != 8 && position != 11) {
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }
        }
        if (ban[2][8] == 3){//このマスにRYOKEN3がいるときの動き
            printf("猟犬はこのマスからは動けません.やり直してください\n");
            hantei = 3;
        }
        if (ban[4][2] == 3){//このマスにRYOKEN3がいるときの動き
            if (position == 5){//移動したいマスがこの番号(ban[2][2])だったとき
                if (ban[2][2] == 4) {//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[2][2] == 1 || ban[2][2] == 2) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else{
                    ban[2][2] = RYOKEN3;
                    ban[4][2] = MARU9;
                    hyouzi();//RYOKEN3とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
           if (position == 6){//移動したいマスがこの番号(ban[2][4])だったとき
               if (ban[2][4] == 4){//移動した先がUSAGIのいるマスだったとき
                   printf("そのマスには移動できません.もう一度入力してください\n");
                   hantei = 0;
               }else if (ban[2][4] == 1 || ban[2][4] == 2) {
                   printf("そのマスには移動できません.もう一度入力してください\n");
                   hantei = 0;
               }else{
                   ban[2][4] = RYOKEN3;
                   ban[4][2] = MARU9;
                   hyouzi();//RYOKEN3とさっきいたマスを入れ替えた後、再び表示
                   hantei = 1;
                   break;
               }
           }
            if (position == 10){//移動したいマスがこの番号(ban[4][4])だったとき
                  if (ban[4][4] == 4) {//移動した先がUSAGIのいるマスだったとき
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else if (ban[4][4] == 1 || ban[4][4] == 2) {
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else{
                      ban[4][4] = RYOKEN3;
                      ban[4][2] = MARU9;
                      hyouzi();//RYOKEN3とさっきいたマスを入れ替えた後、再び表示
                      hantei = 1;
                      break;
                  }
              }
                if (position != 5 && position != 6 && position != 10) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }
            }
        if (ban[4][4] == 3){//このマスにRYOKEN3がいるときの動き
            if (position == 6){//移動したいマスがこの番号(ban[2][4])だったとき
                if (ban[2][4] == 4){//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[2][4] == 1 || ban[2][4] == 2) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else{
                    ban[2][4] = RYOKEN3;
                    ban[4][4] = MARU10;
                    hyouzi();//RYOKEN3とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 11){//移動したいマスがこの番号(ban[4][6])だったとき
                  if (ban[4][6] == 4) {//移動した先がUSAGIのいるマスだったとき
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else if (ban[4][6] == 1 || ban[4][6] == 2) {
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else{
                      ban[4][6] = RYOKEN3;
                      ban[4][4] = MARU10;
                      hyouzi();//RYOKEN3とさっきいたマスを入れ替えた後、再び表示
                      hantei = 1;
                      break;
                  }
              }
            if(position != 6 && position != 11) {
                printf("そのマスには移動できません.もう一度入力してください\n");
                hantei = 0;
            }
        }
        if (ban[4][6] == 3){//このマスにRYOKEN3がいるときの動き
             if (position == 7){//移動したいマスがこの番号(ban[2][6])だったとき
                 if (ban[2][6] == 4) {//移動した先がUSAGIのいるマスだったとき
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                 }else if (ban[2][6] == 1 || ban[2][6] == 2) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                 }else{
                     ban[2][6] = RYOKEN3;
                     ban[4][6] = MARU11;
                     hyouzi();//RYOKEN3とさっきいたマスを入れ替えた後、再び表示
                     hantei = 1;
                     break;
                 }
             }
            if (position == 8){//移動したいマスがこの番号(ban[2][8])だったとき
                if (ban[2][8] == 4){//移動した先がUSAGIのいるマスだったとき
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else if (ban[2][8] == 1 || ban[2][8] == 2) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }else{
                    ban[2][8] = RYOKEN3;
                    ban[4][6] = MARU11;
                    hyouzi();//RYOKEN3とさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 10){//移動したいマスがこの番号(ban[4][4])だったとき
                  if (ban[4][4] == 4) {//移動した先がUSAGIのいるマスだったとき
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else if (ban[4][4] == 1 || ban[4][4] == 2) {
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }else{
                      ban[4][4] = RYOKEN3;
                      ban[4][6] = MARU11;
                      hyouzi();//RYOKEN3とさっきいたマスを入れ替えた後、再び表示
                      hantei = 1;
                      break;
                  }
              }
                 if (position != 6 && position != 7 && position != 8) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                 }
             }
    }
}
void usagimove(void){//USAGIを動かすための関数
    int position;
    hantei = 0;//USAGIの移動するマスがルールに従っているかの判定をする変数
    while (hantei == 0) {
        printf("兎をどこに動かす？番号を入力してね！\n");
        printf("(今いるマスから線が繋がっている場所へどこでも1マス移動できます)\n");
        scanf("%d", &position);//移動したいマスへの入力
        if (ban[0][2] == 4){//このマスにUSAGIがいるときの動き
            if (position == 2) {//移動したいマスがこの番号(ban[0][4])だったとき
                if (ban[0][4] == 1 ||ban[0][4] == 2 ||ban[0][4] == 3) {//移動した先がRYOKENのいるマスだったとき
                    printf("猟犬側の勝利です");
                    hantei = 2;
                    break;
                }else{
                    ban[0][4] = USAGI;
                    ban[0][2] = MARU1;
                    hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 4){//移動したいマスがこの番号(ban[2][0])だったとき
                if (ban[2][0] == 1 ||ban[2][0] == 2 ||ban[2][0] == 3) {//移動した先がRYOKENのいるマスだったとき
                    printf("猟犬側の勝利です");
                    hantei = 1;
                    break;
                }else{
                    ban[2][0] = USAGI;
                    ban[0][2] = MARU1;
                    hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                    printf("兎側の勝利です");
                    hantei = 1;
                    break;
                }
            }
            if (position == 5){//移動したいマスがこの番号(ban[2][2])だったとき
                if (ban[2][2] == 1 ||ban[2][2] == 2 ||ban[2][2] == 3) {//移動した先がRYOKENのいるマスだったとき
                    printf("猟犬側の勝利です");
                    hantei = 1;
                    break;
                }else{
                    ban[2][2] = USAGI;
                    ban[0][2] = MARU1;
                    hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
           if (position == 6){//移動したいマスがこの番号(ban[2][4])だったとき
               if (ban[2][4] == 1 ||ban[2][4] == 2 ||ban[2][4] == 3){//移動した先がRYOKENのいるマスだったとき
                   printf("猟犬側の勝利です");
                   hantei = 1;
                   break;
               }else{
                   ban[2][4] = USAGI;
                   ban[0][2] = MARU1;
                   hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                   hantei = 1;
                   break;
               }
           }
                if (position != 2 && position != 4 && position != 5 && position != 6) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }
            }
        if (ban[0][4] == 4){//このマスにUSAGIがいるときの動き
            if (position == 1) {//移動したいマスがこの番号(ban[0][2])だったとき
                if (ban[0][2] == 1 ||ban[0][2] == 2 ||ban[0][2] == 3) {//移動した先がRYOKENのいるマスだったとき
                    printf("猟犬側の勝利です");
                    hantei = 1;
                    break;
                }else{
                    ban[0][2] = USAGI;
                    ban[0][4] = MARU2;
                    hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 3){//移動したいマスがこの番号(ban[0][6])だったとき
                if (ban[0][6] == 1 ||ban[0][6] == 2 ||ban[0][6] == 3) {//移動した先がRYOKENのいるマスだったとき
                    printf("猟犬側の勝利です");
                    hantei = 1;
                    break;
                }else{
                    ban[0][6] = USAGI;
                    ban[0][4] = MARU2;
                    hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 6){//移動したいマスがこの番号(ban[2][4])だったとき
                if (ban[2][4] == 1 ||ban[2][4] == 2 ||ban[2][4] == 3){//移動した先がRYOKENのいるマスだったとき
                    printf("猟犬側の勝利です");
                    hantei = 1;
                }else{
                    ban[2][4] = USAGI;
                    ban[0][4] = MARU2;
                    hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if(position != 1 && position != 3 && position != 6) {
                printf("そのマスには移動できません.もう一度入力してください\n");
                hantei = 0;
            }
        }
       if (ban[0][6] == 4) {//このマスにUSAGIがいるときの動き
            if (position == 2) {//移動したいマスがこの番号(ban[0][4])だったとき
                if (ban[0][4] == 1 ||ban[0][4] == 2 ||ban[0][4] == 3) {//移動した先がRYOKENのいるマスだったとき
                    printf("猟犬側の勝利です");
                    hantei = 1;
                    break;
                }else{
                    ban[0][4] = USAGI;
                    ban[0][6] = MARU3;
                    hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
           if (position == 6){//移動したいマスがこの番号(ban[2][4])だったとき
               if (ban[2][4] == 1 ||ban[2][4] == 2 ||ban[2][4] == 3){//移動した先がRYOKENのいるマスだったとき
                   printf("猟犬側の勝利です");
                   hantei = 2;
                   break;
               }else{
                   ban[2][4] = USAGI;
                   ban[0][6] = MARU3;
                   hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                   hantei = 1;
                   break;
               }
           }
            if (position == 7){//移動したいマスがこの番号(ban[2][6])だったとき
                if (ban[2][6] == 1 ||ban[2][6] == 2 ||ban[2][6] == 3) {//移動した先がRYOKENのいるマスだったとき
                    printf("猟犬側の勝利です");
                    hantei = 1;
                    break;
                }else{
                    ban[2][6] = USAGI;
                    ban[0][6] = MARU3;
                    hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
           if (position == 8){//移動したいマスがこの番号(ban[2][8])だったとき
               if (ban[2][8] == 1 ||ban[2][8] == 2 ||ban[2][8] == 3){//移動した先がRYOKENのいるマスだったとき
                   printf("猟犬側の勝利です");
                   hantei = 2;
                   break;
               }else{
                   ban[2][8] = USAGI;
                   ban[0][6] = MARU3;
                   hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                   hantei = 1;
                   break;
               }
           }
                if (position != 2 && position != 6 && position != 7 && position != 8) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }
            }
       if(ban[2][2] == 4) {//このマスにUSAGIがいるときの動き
           if (position == 1) {//移動したいマスがこの番号(ban[0][2])だったとき
               if (ban[0][2] == 1 ||ban[0][2] == 2 ||ban[0][2] == 3) {//移動した先がRYOKENのいるマスだったとき
                   printf("猟犬側の勝利です");
                   hantei = 1;
               }else{
                   ban[0][2] = USAGI;
                   ban[2][2] = MARU5;
                   hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                   hantei = 1;
                   break;
               }
           }
           if (position == 4){//移動したいマスがこの番号(ban[2][0])だったとき
               if (ban[2][0] == 1 ||ban[2][0] == 2 ||ban[2][0] == 3) {//移動した先がRYOKENのいるマスだったとき
                   printf("猟犬側の勝利です");
                   hantei = 1;
                   break;
               }else{
                   ban[2][0] = USAGI;
                   ban[2][2] = MARU5;
                   hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                   printf("兎側の勝利です");
                   hantei = 2;
                   break;
               }
           }
            if (position == 6){//移動したいマスがこの番号(ban[2][4])だったとき
                if (ban[2][4] == 1 ||ban[2][4] == 2 ||ban[2][4] == 3){//移動した先がRYOKENのいるマスだったとき
                    printf("猟犬側の勝利です");
                    hantei = 1;
                    break;
                }else{
                    ban[2][4] = USAGI;
                    ban[2][2] = MARU5;
                    hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
             if (position == 9){//移動したいマスがこの番号(ban[4][2])だったとき
                 if (ban[4][2] == 1 ||ban[4][2] == 2 ||ban[4][2] == 3) {//移動した先がRYOKENのいるマスだったとき
                     printf("猟犬側の勝利です");
                     hantei = 2;
                     break;
                 }else{
                     ban[4][2] = USAGI;
                     ban[2][2] = MARU5;
                     hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                     hantei = 1;
                     break;
                 }
             }
                 if (position != 1 && position != 4 && position != 6 && position != 9) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                 }
             }
        if (ban[2][4] == 4){//このマスにUSAGIがいるときの動き
            if (position == 1) {//移動したいマスがこの番号(ban[0][2])だったとき
                if (ban[0][2] == 1 ||ban[0][2] == 2 ||ban[0][2] == 3) {//移動した先がRYOKENのいるマスだったとき
                    printf("猟犬側の勝利です");
                    hantei = 2;
                    break;
                }else{
                    ban[0][2] = USAGI;
                    ban[2][4] = MARU6;
                    hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 2) {//移動したいマスがこの番号(ban[0][4])だったとき
                if (ban[0][4] == 1 ||ban[0][4] == 2 ||ban[0][4] == 3) {//移動した先がRYOKENのいるマスだったとき
                    printf("猟犬側の勝利です");
                    hantei = 2;
                    break;
                }else{
                    ban[0][4] = USAGI;
                    ban[2][4] = MARU6;
                    hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 3){//移動したいマスがこの番号(ban[0][6])だったとき
                if (ban[0][6] == 1 ||ban[0][6] == 2 ||ban[0][6] == 3) {//移動した先がRYOKENのいるマスだったとき
                    printf("猟犬側の勝利です");
                    hantei = 2;
                    break;
                }else{
                    ban[0][6] = USAGI;
                    ban[2][4] = MARU6;
                    hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 5){//移動したいマスがこの番号(ban[2][2])だったとき
                if (ban[2][2] == 1 ||ban[2][2] == 2 ||ban[2][2] == 3) {//移動した先がRYOKENのいるマスだったとき
                    printf("猟犬側の勝利です");
                    hantei = 2;
                    break;
                }else{
                    ban[2][2] = USAGI;
                    ban[2][4] = MARU6;
                    hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 7){//移動したいマスがこの番号(ban[2][6])だったとき
                if (ban[2][6] == 1 ||ban[2][6] == 2 ||ban[2][6] == 3) {//移動した先がRYOKENのいるマスだったとき
                    printf("猟犬側の勝利です");
                    hantei = 2;
                    break;
                }else{
                    ban[2][6] = USAGI;
                    ban[2][4] = MARU6;
                    hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 9){//移動したいマスがこの番号(ban[4][2])だったとき
                  if (ban[4][2] == 1 ||ban[4][2] == 2 ||ban[4][2] == 3) {//移動した先がRYOKENのいるマスだったとき
                      printf("猟犬側の勝利です");
                      hantei = 2;
                      break;
                  }else{
                      ban[4][2] = USAGI;
                      ban[2][4] = MARU6;
                      hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                      hantei = 1;
                      break;
                  }
              }
            if (position == 10){//移動したいマスがこの番号(ban[4][4])だったとき
                  if (ban[4][4] == 1 ||ban[4][4] == 2 ||ban[4][4] == 3) {//移動した先がRYOKENのいるマスだったとき
                      printf("猟犬側の勝利です");
                      hantei = 2;
                      break;
                  }else{
                      ban[4][4] = USAGI;
                      ban[2][4] = MARU6;
                      hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                      hantei = 1;
                      break;
                  }
              }
            if (position == 11){//移動したいマスがこの番号(ban[4][6])だったとき
                  if (ban[4][6] == 1 ||ban[4][6] == 2 ||ban[4][6] == 3) {//移動した先がRYOKENのいるマスだったとき
                      printf("猟犬側の勝利です");
                      hantei = 2;
                      break;
                  }else{
                      ban[4][6] = USAGI;
                      ban[2][4] = MARU6;
                      hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                      hantei = 1;
                      break;
                  }
              }
            if (position != 1 && position != 2 && position != 3 && position != 5 && position != 7 && position != 9 && position != 10 && position != 11) {
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }
              }
        if (ban[2][6] == 4){//このマスにUSAGIがいるときの動き
            if (position == 3){//移動したいマスがこの番号(ban[0][6])だったとき
                if (ban[0][6] == 1 ||ban[0][6] == 2 ||ban[0][6] == 3) {//移動した先がRYOKENのいるマスだったとき
                    printf("猟犬側の勝利です");
                    hantei = 2;
                    break;
                }else{
                    ban[0][6] = USAGI;
                    ban[2][6] = MARU7;
                    hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
             if (position == 6){//移動したいマスがこの番号(ban[2][4])だったとき
                 if (ban[2][4] == 1 ||ban[2][4] == 2 ||ban[2][4] == 3){//移動した先がRYOKENのいるマスだったとき
                     printf("猟犬側の勝利です");
                     hantei = 2;
                     break;
                 }else{
                     ban[2][4] = USAGI;
                     ban[2][6] = MARU7;
                     hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                     hantei = 1;
                     break;
                 }
             }
            if (position == 8){//移動したいマスがこの番号(ban[2][8])だったとき
                if (ban[2][8] == 1 ||ban[2][8] == 2 ||ban[2][8] == 3){//移動した先がRYOKENのいるマスだったとき
                    printf("猟犬側の勝利です");
                    hantei = 2;
                    break;
                }else{
                    ban[2][8] = USAGI;
                    ban[2][6] = MARU7;
                    hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 11){//移動したいマスがこの番号(ban[4][6])だったとき
                  if (ban[4][6] == 1 ||ban[4][6] == 2 ||ban[4][6] == 3) {//移動した先がRYOKENのいるマスだったとき
                      printf("猟犬側の勝利です");
                      hantei = 2;
                      break;
                  }else{
                      ban[4][6] = USAGI;
                      ban[2][6] = MARU7;
                      hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                      hantei = 1;
                      break;
                  }
              }
                  if (position != 3 && position != 6 && position != 8 && position != 11) {
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }
              }
        if (ban[2][8] == 4){//このマスにUSAGIがいるときの動き
            if (position == 3){//移動したいマスがこの番号(ban[0][6])だったとき
                if (ban[0][6] == 1 ||ban[0][6] == 2 ||ban[0][6] == 3) {//移動した先がRYOKENのいるマスだったとき
                    printf("猟犬側の勝利です");
                    hantei = 2;
                    break;
                }else{
                    ban[0][6] = USAGI;
                    ban[2][8] = MARU8;
                    hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 7){//移動したいマスがこの番号(ban[2][6])だったとき
                if (ban[2][6] == 1 ||ban[2][6] == 2 ||ban[2][6] == 3) {//移動した先がRYOKENのいるマスだったとき
                    printf("猟犬側の勝利です");
                    hantei = 2;
                    break;
                }else{
                    ban[2][6] = USAGI;
                    ban[2][8] = MARU8;
                    hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 11){//移動したいマスがこの番号(ban[4][6])だったとき
                  if (ban[4][6] == 1 ||ban[4][6] == 2 ||ban[4][6] == 3) {//移動した先がRYOKENのいるマスだったとき
                      printf("猟犬側の勝利です");
                      hantei = 2;
                      break;
                  }else{
                      ban[4][6] = USAGI;
                      ban[2][8] = MARU8;
                      hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                      hantei = 1;
                      break;
                  }
              }
                  if (position != 3 && position != 7 && position != 11) {
                      printf("そのマスには移動できません.もう一度入力してください\n");
                      hantei = 0;
                  }
              }
        if (ban[4][2] == 4){//このマスにUSAGIがいるときの動き
            if (position == 4){//移動したいマスがこの番号(ban[2][0])だったとき
                if (ban[2][0] == 1 ||ban[2][0] == 2 ||ban[2][0] == 3) {//移動した先がRYOKENのいるマスだったとき
                    printf("猟犬側の勝利です\n");
                    hantei = 2;
                    break;
                }else{
                    ban[2][0] = USAGI;
                    ban[4][2] = MARU9;
                    hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                    printf("兎側の勝利です");
                    hantei = 2;
                    break;
                }
            }
            if (position == 5){//移動したいマスがこの番号(ban[2][2])だったとき
                if (ban[2][2] == 1 ||ban[2][2] == 2 ||ban[2][2] == 3) {//移動した先がRYOKENのいるマスだったとき
                    printf("猟犬側の勝利です");
                    hantei = 2;
                    break;
                }else{
                    ban[2][2] = USAGI;
                    ban[4][2] = MARU9;
                    hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
           if (position == 6){//移動したいマスがこの番号(ban[2][4])だったとき
               if (ban[2][4] == 1 ||ban[2][4] == 2 ||ban[2][4] == 3){//移動した先がRYOKENのいるマスだったとき
                   printf("猟犬側の勝利です");
                   hantei = 2;
                   break;
               }else{
                   ban[2][4] = USAGI;
                   ban[4][2] = MARU9;
                   hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                   hantei = 1;
                   break;
               }
           }
            if (position == 10){//移動したいマスがこの番号(ban[4][4])だったとき
                  if (ban[4][4] == 1 ||ban[4][4] == 2 ||ban[4][4] == 3) {//移動した先がRYOKENのいるマスだったとき
                      printf("猟犬側の勝利です");
                      hantei = 2;
                      break;
                  }else{
                      ban[4][4] = USAGI;
                      ban[4][2] = MARU9;
                      hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                      hantei = 1;
                      break;
                  }
              }
                if (position != 4 && position != 5 && position != 6 && position != 10) {
                    printf("そのマスには移動できません.もう一度入力してください\n");
                    hantei = 0;
                }
            }
        if (ban[4][4] == 4){//このマスにUSAGIがいるときの動き
            if (position == 6){//移動したいマスがこの番号(ban[2][4])だったとき
                if (ban[2][4] == 1 ||ban[2][4] == 2 ||ban[2][4] == 3){//移動した先がRYOKENのいるマスだったとき
                    printf("猟犬側の勝利です");
                    hantei = 2;
                    break;
                }else{
                    ban[2][4] = USAGI;
                    ban[4][4] = MARU10;
                    hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 9){//移動したいマスがこの番号(ban[4][2])だったとき
                  if (ban[4][2] == 1 ||ban[4][2] == 2 ||ban[4][2] == 3) {//移動した先がRYOKENのいるマスだったとき
                      printf("猟犬側の勝利です");
                      hantei = 2;
                      break;
                  }else{
                      ban[4][2] = USAGI;
                      ban[4][4] = MARU10;
                      hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                      hantei = 1;
                      break;
                  }
              }
            if (position == 11){//移動したいマスがこの番号(ban[4][6])だったとき
                  if (ban[4][6] == 1 ||ban[4][6] == 2 ||ban[4][6] == 3) {//移動した先がRYOKENのいるマスだったとき
                      printf("猟犬側の勝利です");
                      hantei = 2;
                      break;
                  }else{
                      ban[4][6] = USAGI;
                      ban[4][4] = MARU10;
                      hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                      hantei = 1;
                      break;
                  }
              }
            if(position != 6 && position != 9 && position != 11) {
                printf("そのマスには移動できません.もう一度入力してください\n");
                hantei = 0;
            }
        }
        if (ban[4][6] == 4){//このマスにUSAGIがいるときの動き
            if (position == 6){//移動したいマスがこの番号(ban[2][4])だったとき
                if (ban[2][4] == 1 ||ban[2][4] == 2 ||ban[2][4] == 3){//移動した先がRYOKENのいるマスだったとき
                    printf("猟犬側の勝利です");
                    hantei = 2;
                    break;
                }else{
                    ban[2][4] = USAGI;
                    ban[4][6] = MARU11;
                    hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
             if (position == 7){//移動したいマスがこの番号(ban[2][6])だったとき
                 if (ban[2][6] == 1 ||ban[2][6] == 2 ||ban[2][6] == 3) {//移動した先がRYOKENのいるマスだったとき
                     printf("猟犬側の勝利です");
                     hantei = 2;
                     break;
                 }else{
                     ban[2][6] = USAGI;
                     ban[4][6] = MARU11;
                     hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                     hantei = 1;
                     break;
                 }
             }
            if (position == 8){//移動したいマスがこの番号(ban[2][8])だったとき
                if (ban[2][8] == 1 ||ban[2][8] == 2 ||ban[2][8] == 3){//移動した先がRYOKENのいるマスだったとき
                    printf("猟犬側の勝利です");
                    hantei = 2;
                    break;
                }else{
                    ban[2][8] = USAGI;
                    ban[4][6] = MARU11;
                    hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                    hantei = 1;
                    break;
                }
            }
            if (position == 10){//移動したいマスがこの番号(ban[4][4])だったとき
                  if (ban[4][4] == 1 ||ban[4][4] == 2 ||ban[4][4] == 3) {//移動した先がRYOKENのいるマスだったとき
                      printf("猟犬側の勝利です");
                      hantei = 2;
                      break;
                  }else{
                      ban[4][4] = USAGI;
                      ban[4][6] = MARU11;
                      hyouzi();//USAGIとさっきいたマスを入れ替えた後、再び表示
                      hantei = 1;
                      break;
                  }
              }
                 if (position != 6 && position != 7 && position != 8 && position != 10) {
                     printf("そのマスには移動できません.もう一度入力してください\n");
                     hantei = 0;
                 }
             }
    }
}
int main(int argc, const char * argv[]) {
    int x = 0;//動かす犬の番号の定義
    int youi;//準備はいいかを判定する数字の定義
    int count = 1;//ターン数を数える数字の定義
    printf("今から兎と猟犬というゲームをするよ！\nルール；20ターン以内に猟犬が兎の逃げ道を塞げば猟犬の勝利\n　　　　20ターン逃げ切るか一番左のマスまで兎が逃げられれば兎の勝利\n");
    printf("　　　　猟犬は既に別の猟犬がいるマスには移動できず、後ろに進むこともできない\n　　　　兎は前後左右どこでも進める\n");//実行したとき見やすくなるよう空白を入れて調整
    printf("Are you ready？(準備ができたら1を入力してください) ");
    scanf("%d", &youi);
    if (youi == 1) {
        printf("\n");//改行をして盤面を綺麗にする
        syokika();
        hyouzi();
        while (hantei != 2) {//決着がつくまでループ
            printf("%d ターン目\n", count);
            while (x != 1 && x != 2 && x != 3) {//猟犬が正しく動くまでループ
                printf("動かしたい犬は？(茶色の犬なら１、黒の犬なら２、白の犬なら３を入力してください) ");
                scanf("%d", &x);
                if (x == 1) {
                    inu1move();
                }
                if (x == 2) {
                    inu2move();
                }
                if (x == 3) {
                    inu3move();
                }
                if (x != 1 && x != 2 && x != 3) {
                    printf("入力した数字を間違えているよ！\n");
                    continue;
                }
            }
            if (hantei == 2) {//猟犬用の関数で決着がついたとき強制終了
                break;
            }
            usagimove();
            count++;
            x = 0;//次のターンでまたwhile文を使えるようにxを初期化
            if (count > 20) {//20ターン経ったら強制的に終了
                printf("兎側の勝利です");
                break;
            }
        }
    }
    if (youi != 1) {
        printf("そうですか...遊びたくなったらまた実行してくださいね！\n");
    }
    printf("\n");
    return 0;
    }
