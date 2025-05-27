#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 8
#define MINES 10

char board[SIZE][SIZE];
char display[SIZE][SIZE];

void initialize_board() {
    for(int i=0; i<SIZE; i++)
        for(int j=0; j<SIZE; j++) {
            board[i][j] = '0';
            display[i][j] = '*';
        }
}

void place_mines() {
    int placed = 0;
    while(placed < MINES) {
        int x = rand() % SIZE;
        int y = rand() % SIZE;
        if(board[x][y] != 'M') {
            board[x][y] = 'M';
            placed++;
        }
    }
}

void print_display() {
    printf("  ");
    for(int i=0; i<SIZE; i++) printf("%d ", i);
    printf("\n");
    for(int i=0; i<SIZE; i++) {
        printf("%d ", i);
        for(int j=0; j<SIZE; j++) {
            printf("%c ", display[i][j]);
        }
        printf("\n");
    }
}

// Simple placeholder main function
int main() {
    srand(time(NULL));
    initialize_board();
    place_mines();
    print_display();
    // Add more logic for gameplay
    return 0;
}