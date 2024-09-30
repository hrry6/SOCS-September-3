#include <stdio.h>

int main() {
    // Declare an array to hold the characters and their original positions
    char blocks[3];
    int positions[3] = {1, 2, 3}; // Original positions: 1, 2, 3

    // Input: Read three characters
    scanf(" %c %c %c", &blocks[0], &blocks[1], &blocks[2]);

    // Bubble sort to sort the blocks and maintain the positions
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (blocks[j] > blocks[j + 1]) {
                // Swap the blocks
                char temp = blocks[j];
                blocks[j] = blocks[j + 1];
                blocks[j + 1] = temp;

                // Swap the positions to keep track of the original positions
                int tempPos = positions[j];
                positions[j] = positions[j + 1];
                positions[j + 1] = tempPos;
            }
        }
    }

    // Output the sorted positions
    printf("%d %d %d\n", positions[0], positions[1], positions[2]);

    return 0;
}