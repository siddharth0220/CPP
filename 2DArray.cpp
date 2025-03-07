#include <iostream>
using namespace std;
int main()
{
    int matrix[3][4];
    int rows = 3;
    int columns = 4;
    cout << "Enter the matrix\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {

            cin >> matrix[i][j];
        }
    }
    cout << "Below is the entered Matrix\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {

            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}