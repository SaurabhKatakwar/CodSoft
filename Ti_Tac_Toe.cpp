#include <iostream>
#include <vector>
using namespace std;

class TicTacToe {
private:
    vector<vector<char> > board;
    char currentPlayer;

public:
    TicTacToe() {
        board = vector<vector<char> >(3, vector<char>(3, ' '));
        currentPlayer = 'X';
    }

    void displayBoard() {
        cout << "\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << board[i][j];
                if (j < 2) cout << " | ";
            }
            cout << "\n";
            if (i < 2) cout << "--|---|--\n";
        }
        cout << "\n";
    }

    bool isMoveValid(int row, int col) {
        return row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ';
    }

    bool makeMove(int row, int col) {
        if (isMoveValid(row, col)) {
            board[row][col] = currentPlayer;
            return true;
        }
        return false;
    }

    bool checkWin() {
        // Check rows and columns
        for (int i = 0; i < 3; i++) {
            if ((board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) ||
                (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer)) {
                return true;
            }
        }

        // Check diagonals
        if ((board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) ||
            (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer)) {
            return true;
        }

        return false;
    }

    bool checkDraw() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == ' ') return false;
            }
        }
        return true;
    }

    void switchPlayer() {
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    void resetBoard() {
        board = vector<vector<char> >(3, vector<char>(3, ' '));
        currentPlayer = 'X';
    }

    void playGame() {
        while (true) {
            displayBoard();
            cout << "Player " << currentPlayer << ", enter your move (row and column): ";
            int row, col;
            cin >> row >> col;

            if (makeMove(row - 1, col - 1)) {
                if (checkWin()) {
                    displayBoard();
                    cout << "Player " << currentPlayer << " wins!\n";
                    break;
                } else if (checkDraw()) {
                    displayBoard();
                    cout << "It's a draw!\n";
                    break;
                }
                switchPlayer();
            } else {
                cout << "Invalid move. Try again.\n";
            }
        }
    }

    void start() {
        while (true) {
            playGame();
            cout << "Do you want to play again? (y/n): ";
            char choice;
            cin >> choice;
            if (choice == 'n' || choice == 'N') {
                cout << "Thanks for playing!\n";
                break;
            }
            resetBoard();
        }
    }
};

int main() {
    TicTacToe game;
    game.start();
    return 0;
}
