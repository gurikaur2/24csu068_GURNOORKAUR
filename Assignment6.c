//WAP to make a tic tac toe game

#include <stdio.h>

void displayBoard(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---|---|---\n");
    }
}

char checkWinner(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return board[i][0];
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return board[0][i];
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return board[0][0];
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return board[0][2];
    return ' ';
}

int main() {
    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    int row, col, turns = 0;
    char player = 'X';

    while (turns < 9) {
        displayBoard(board);
        printf("Player %c, enter row and column: ", player);
        scanf("%d %d", &row, &col);

        if (row >= 1 && row <= 3 && col >= 1 && col <= 3 && board[row-1][col-1] == ' ') {
            board[row-1][col-1] = player;
            turns++;
            if (checkWinner(board) != ' ') {
                displayBoard(board);
                printf("Player %c wins!\n", player);
                return 0;
            }
            player = (player == 'X') ? 'O' : 'X';
        } else {
            printf("Invalid move. Try again.\n");
        }
    }
    displayBoard(board);
    printf("It's a draw!\n");
    return 0;
}