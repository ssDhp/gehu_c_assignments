/* Write a C program to draw following pattern
Note: No nested loop is required.
1, 11, 121 ….are single numbers so it should be printed at once.
1
11
121
1331
14641 */

//  !! NOTE !!
// I am not so sure about this solution.
// I don't understand this part of the question '1, 11, 121 ….are single numbers so it should be printed at once.'
// Even though this solution does not use nested loops, in fact it does not use any loops at all.

#include <stdio.h>

// This function calculate a number in pascal's triangle in row currentRow and at index currentIndex using recursion.
long int choose(int currentRow, int currentIndex)
{
    // If at start or at end of row, return 1
    return currentIndex == 0 || currentIndex == currentRow ? 1 : choose(currentRow - 1, currentIndex - 1) + choose(currentRow - 1, currentIndex);
}

// This function prints an entire row using recursion
// currentRow - It takes the index of current row which also equal to number of numbers in that row
// currentIndex - It takes the index of current number in the current row
// Indexing for both currentRow and currentIndex start at 0
void printRow(int currentRow, int currentIndex)
{
    printf("%ld ", choose(currentRow, currentIndex));
    // At the end of row, print new line
    if (currentRow == currentIndex)
    {
        printf("\n");
        return;
    }
    // Print number at next index
    printRow(currentRow, currentIndex + 1);
}

// This function is similar to a for loop.
// It will call printRow with x then it will call printRow with x+1 and so on untill condition is not met.
void drawrows(int startRow, int endRow)
{
    if (startRow <= endRow)
    {
        printRow(startRow, 0);
        drawrows(startRow + 1, endRow);
    }
    return;
}

void main()
{
    int row;
    printf("Enter number of row: ");
    scanf("%d", &row);
    // Both startRow and endRow are enclusive
    drawrows(0, row - 1);
}