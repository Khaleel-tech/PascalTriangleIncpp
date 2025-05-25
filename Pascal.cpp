#include<bits/stdc++.h>
using namespace std;

// Function to print the specific element in Pascal's Triangle at given (col, row)
// It uses the formula: C(row, col) = row! / (col! * (row-col)!)
void PrintSpecificElement(int col, int row) {
    int ans = 1;
    int temp = row;

    // Efficient calculation of nCr without using factorials
    for (int i = 0; i < col; i++) {
        ans = ans * temp;        // Multiply with (row - i)
        ans = ans / (i + 1);     // Divide by (i + 1)
        temp--;                  // Decrement the value of row for next iteration
    }

    cout << ans << endl;         // Output the computed element
}

// Function to print a specific row of Pascal's Triangle
void PrintPascalRow(int Row) {
    cout << "1" << endl;         // First element of every row is always 1

    // Loop through remaining elements of the row
    for (int i = 1; i <= Row; i++) {
        PrintSpecificElement(i, Row); // Reuse logic to print each element
    }
}

// Function to print the whole Pascal's Triangle up to Rowlimit
void PrintWholeTriangle(int Rowlimit) {
    for (int i = 0; i <= Rowlimit; i++) {
        PrintPascalRow(i);       // Print each row
        cout << endl;            // Line break after each row
    }
}

int main() {
    // Test your desired function here
    // Examples:
    // PrintSpecificElement(2, 4);  // To print the 2nd element in 4th row
    // PrintPascalRow(3);           // To print entire 3rd row
    PrintWholeTriangle(4);         // To print Pascal's triangle up to row 4
}
