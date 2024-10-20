#include <iostream>
using namespace std;
void diamondup(int rows);
void diamonddn(int rows);
int main()
{
    int rows;
    cout << "Enter desired number of rows: ";
    cin >> rows;
    diamondup(rows); //function call
    diamonddn(rows); //function call
}
void diamondup(int rows) // to print upper half of the desired shape
{
     for(int row =1;row<=rows; row++)
    {
        for(int rowspace=rows-row; rowspace>0; rowspace--) // to print spaces from top to mid of the shape
        {
            cout << " ";
        }
        for (int col = 1; col <=row ; col++)
        {
            cout << "*";
        }
        cout << endl;
        
    }
}
void diamonddn(int rows) // to print lower half of the desired shape
{
    for(int row = rows; row>=1; row--)
    {
        for(int rowspace=1; rowspace<=rows-row; rowspace++) // to print spaces from mid of the shape to the end
        {
            cout << " ";
        }
        for (int col = 1; col <=row ; col++)
        {
            cout << "*";
        }
        cout << endl;
        
    }
}