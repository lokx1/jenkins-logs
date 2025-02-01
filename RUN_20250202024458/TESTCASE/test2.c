#include <assert.h>
#include <string.h>

// Test case for initializeBoard function
void test_initializeBoard() {
    char board[3][3];
    initializeBoard(board);

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            assert(board[i][j] == ' ');
}

// Test case for isValidMove function
void test_isValidMove() {
    char board[3][3] = {{' ', ' ', ' '}, {' ', 'X', ' '}, {' ', ' ', ' '}};

    assert(isValidMove(board, 1, 1) == false);
    assert(isValidMove(board, 0, 0) == true);
    assert(isValidMove(board, 3, 3) == false);
    assert(isValidMove(board, -1, -1) == false);
}

// Test case for isGameOver function
void test_isGameOver() {
    char board[3][3] = {{'X', 'X', 'X'}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    assert(isGameOver(board) == true);

    char board2[3][3] = {{'X', 'O', 'X'}, {'O', 'X', 'O'}, {'X', 'O', 'X'}};
    assert(isGameOver(board2) == true);

    char board3[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    assert(isGameOver(board3) == false);
}

// Test case for makeMove function
void test_makeMove() {
    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    makeMove(board, 1, 1, 'X');
    assert(board[1][1] == 'X');
}

int main() {
    test_initializeBoard();
    test_isValidMove();
    test_isGameOver();
    test_makeMove();

    printf("All test cases passed successfully.\n");
    return 0;
}