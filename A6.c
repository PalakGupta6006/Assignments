//Tic-tac-toe
#include <stdio.h>

char board[3][3];  
char currentPlayer = 'X';
void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';  
        }
    }
}

void displayBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

int checkWin() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) return 1;
        if (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer) return 1;
    }
    if (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) return 1;
    if (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer) return 1;

    return 0;
}

int checkTie() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;  
        }
    }
    return 1;  
}

void makeMove() {
    int row, col;
    printf("Player %c, enter your move (row and column: 0-2): ", currentPlayer);
    while (1) {
        scanf("%d %d", &row, &col);
        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            board[row][col] = currentPlayer;
            break;
        } else {
            printf("Invalid move, try again (row and column: 0-2): ");
        }
    }
}

int main() {
    int gameOver = 0;
    initializeBoard();

    while (!gameOver) {
        displayBoard();
        makeMove();

        if (checkWin()) {
            displayBoard();
            printf("Player %c wins!\n", currentPlayer);
            gameOver = 1;
        } else if (checkTie()) {
            displayBoard();
            printf("It's a tie!\n");
            gameOver = 1;
        } else {
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
    }
    return 0;
}