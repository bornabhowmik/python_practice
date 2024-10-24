/******************
 * Student Name: Jisan Ahmed Fahim
 * Student Number: 200520420
 * File Name: Exercise_3.cpp
 ********************/

#include <iostream>
using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

// Function prototypes
void inputArray(int array[MAX_ROWS][MAX_COLS], int rows, int cols);
void findDuplicates(int array[MAX_ROWS][MAX_COLS], int rows, int cols);
int countOccurrences(int array[MAX_ROWS][MAX_COLS], int rows, int cols, int element);
bool isFirstOccurrence(int array[MAX_ROWS][MAX_COLS], int rows, int cols, int element, int currentRow, int currentCol);

// Main function that coordinates the program flow
int main()
{
    int rows, cols;

    // Prompt user for number of rows and columns
    cout << "We are supposed to create a 2D array. Please enter the number of rows and the number of columns: ";
    cin >> rows >> cols;

    int array[MAX_ROWS][MAX_COLS]; // Declare a 2D array of maximum size

    cout << "Enter the values:" << endl;
    inputArray(array, rows, cols); // Function to input array values

    cout << "Thank you. ";
    findDuplicates(array, rows, cols);
    return 0;
}

// Function to input values into the array
void inputArray(int array[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> array[i][j];
        }
    }
}

// Function to find and print duplicate elements in a 2D array
void findDuplicates(int array[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    bool foundDuplicate = false;

    // Loop through each element of the array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int currentElement = array[i][j]; // Current element being checked

            // Check if this is the first occurrence of the element
            if (isFirstOccurrence(array, rows, cols, currentElement, i, j))
            {
                int count = countOccurrences(array, rows, cols, currentElement);
                if (count > 1)
                {
                    cout << currentElement << " appears " << count << " times. ";
                    foundDuplicate = true;
                }
            }
        }
    }

    // If no duplicates were found, print a message
    if (!foundDuplicate)
    {
        cout << "There are no duplicate elements." << endl;
    }
}

// Function to count occurrences of a given element in the array
int countOccurrences(int array[MAX_ROWS][MAX_COLS], int rows, int cols, int element)
{
    int count = 0; // Counter for occurrences of the element
    for (int x = 0; x < rows; x++)
    {
        for (int y = 0; y < cols; y++)
        {
            if (array[x][y] == element)
            {
                count++;
            }
        }
    }
    return count; // Return the total count
}

// Function to check if the element is the first occurrence
bool isFirstOccurrence(int array[MAX_ROWS][MAX_COLS], int rows, int cols, int element, int currentRow, int currentCol)
{
    // Check previous rows for the element
    for (int k = 0; k < currentRow; k++)
    {
        for (int l = 0; l < cols; l++)
        {
            if (array[k][l] == element)
            {
                return false;
            }
        }
    }

    // Check previous elements in the current row
    for (int l = 0; l < currentCol; l++)
    {
        if (array[currentRow][l] == element)
        {
            return false;
        }
    }

    return true;
}