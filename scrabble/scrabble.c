#include <stdio.h>

int score(char word[], int score, int points[]);

int main(){

    int points[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    char player1[30] ,player2[30];
    int player1Score = 0 ,player2Score = 0;

    printf("Player 1: ");
    fgets(player1, 30, stdin);

    printf("Player 2: ");
    fgets(player2, 30, stdin);

    player1Score=score(player1, player1Score, points);
    player2Score=score(player2, player2Score, points);

    if(player1Score>player2Score){
        printf("PLAYER 1 WINS!");
    }
    else if(player1Score<player2Score){
        printf("PLAYER 2 WINS!");
    }
    else{
        printf("TIE!");
    }

    return 0;
}

int score(char word[], int score, int points[]){
    int i=0;
    score =0;
    while(word[i] != '\n'){
        if(word[i] == 'a' || word[i] =='A'){
            score += points[0];
        }
        else if(word[i] == 'b' || word[i] =='B'){
            score += points[1];
        }
        else if(word[i] == 'c' || word[i] =='C'){
            score += points[2];
        }
        else if(word[i] == 'd' || word[i] =='D'){
            score += points[3];
        }
        else if(word[i] == 'e' || word[i] =='E'){
            score += points[4];
        }
        else if(word[i] == 'f' || word[i] =='F'){
            score += points[5];
        }
        else if(word[i] == 'g' || word[i] =='G'){
            score += points[6];
        }
        else if(word[i] == 'h' || word[i] =='H'){
            score += points[7];
        }
        else if(word[i] == 'i' || word[i] =='I'){
            score += points[8];
        }
        else if(word[i] == 'j' || word[i] =='J'){
            score += points[9];
        }
        else if(word[i] == 'k' || word[i] =='K'){
            score += points[10];
        }
        else if(word[i] == 'l' || word[i] =='L'){
            score += points[11];
        }
        else if(word[i] == 'm' || word[i] =='M'){
            score += points[12];
        }
        else if(word[i] == 'n' || word[i] =='N'){
            score += points[13];
        }
        else if(word[i] == 'o' || word[i] =='O'){
            score += points[14];
        }
        else if(word[i] == 'p' || word[i] =='P'){
            score += points[15];
        }
        else if(word[i] == 'q' || word[i] =='Q'){
            score += points[16];
        }
        else if(word[i] == 'r' || word[i] =='R'){
            score += points[17];
        }
        else if(word[i] == 's' || word[i] =='S'){
            score += points[18];
        }
        else if(word[i] == 't' || word[i] =='T'){
            score += points[19];
        }
        else if(word[i] == 'u' || word[i] =='U'){
            score += points[20];
        }
        else if(word[i] == 'v' || word[i] =='V'){
            score += points[21];
        }
        else if(word[i] == 'w' || word[i] =='W'){
            score += points[22];
        }
        else if(word[i] == 'x' || word[i] =='X'){
            score += points[23];
        }
        else if(word[i] == 'y' || word[i] =='Y'){
            score += points[24];
        }
        else if(word[i] == 'z' || word[i] =='Z'){
            score += points[25];
        }
        i++;
    }
    return score;
}
