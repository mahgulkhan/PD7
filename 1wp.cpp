#include <iostream>
using namespace std;
void diamond(int rows);
int main()
{
    int rows;
    cout << "Enter desired number of rows: ";
    cin >> rows;
    diamond(rows);
}
void diamond(int rows)
{
    for(int row =1;row<=rows; row++)
    {
        for (int col = 1; col <=row ; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}