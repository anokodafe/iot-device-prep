#include <stdio.h>

void drawBoard(char board[]) {
    printf("%c | %c | %c\n", board[1], board[2], board[3]);
    printf("---|---|---\n");
    printf("%c | %c | %c\n", board[4], board[5], board[6]);
    printf("---|---|---\n");
    printf("%c | %c | %c\n", board[7], board[8], board[9]);
}

void markBoard(char board[], int choice, char player) {
    board[choice] = player;
}

int checkForWin(char board[], char player) {
    if (board[1] == player && board[2] == player && board[3] == player)
        return 1;
    else if (board[4] == player && board[5] == player && board[6] == player)
        return 1;
    else if (board[7] == player && board[8] == player && board[9] == player)
        return 1;
    else if (board[1] == player && board[4] == player && board[7] == player)
        return 1;
    else if (board[2] == player && board[5] == player && board[8] == player)
        return 1;
    else if (board[3] == player && board[6] == player && board[9] == player)
        return 1;
    else if (board[1] == player && board[5] == player && board[9] == player)
        return 1;
    else if (board[3] == player && board[5] == player && board[7] == player)
        return 1;
    return 0;
}

int main() {
    char board[10] = {'0','1','2','3','4','5','6','7','8','9'};
    printf("Tic\tTac\tToe\n");
    printf("Player 1 (X) - Player 2 (O)\n");
    int choice;
    int gameOver = 0;
    while (gameOver == 0) {
        drawBoard(board);
        printf("Player 1, enter a number: ");
        scanf("%d", &choice);
        markBoard(board, choice, 'X');
        if (checkForWin(board, 'X') == 1) {
            printf("Player 1 wins!\n");
            gameOver = 1;
        }
        printf("Player 2, enter a number: ");
        scanf("%d", &choice);
        markBoard(board, choice, 'O');
        if (checkForWin(board, 'O') == 1) {
            printf("Player 2 wins!\n");
            gameOver = 1;
        }
    }
    return 0;
}
