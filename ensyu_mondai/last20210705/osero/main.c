//
//  main.c
//  osero
//
//  Created by k21116kk on 2021/07/11.
//

#include <stdio.h>

#define L 9 //盤の広さ
#define EMPTY 0//何も置いてない場所を示す
#define BLACK 1
#define WHITE 2

int board[L][L];

void shokika() {//盤面リセット
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < L; j++) {
            board[i][j] = EMPTY;
        }
    }
    board[4][4] = WHITE;
    board[4][5] = BLACK;
    board[5][4] = BLACK;
    board[5][5] = WHITE;
}

void display() {//盤面表示・更新
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < L; j++) {
            switch (board[i][j]) {
            case WHITE:
                printf(" ●");
                break;
            case BLACK:
                printf(" 〇");
                break;
            default:
                if (i==0||j==0) {
                    if (i == 0) {
                        board[i][j]=j;
                    }
                    else {
                        board[i][j] = i;
                    }
                    
                    if (board[i][j] == board[0][0]) {
                        printf("　", board[i][j]);
                    }
                    else if (i == 0) {
                        switch (j){
                        case 1:
                            printf(" １ ２ ３ ４ ５ ６ ７ ８");//横の数字を表示
                            break;
                        }
                    }
                    else{
                        printf(" %d", board[i][j]); //縦の数字を表示
                    }
                    break;
                }
                else
                {
                    printf(" ＊");
                }
            }
            if (j == L - 1) {//改行
                printf("\n");
            }
        }
    }
}

int main(int argc, char* argv[])
{
    printf("犬\n🟤\n");

    return 0;
}
