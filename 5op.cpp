#include <iostream>
using namespace std;
bool prime(int num);
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << prime(num);
}
bool prime(int num)
{
    for (int number=2;number<num;number++)
    {
        if(num%number==0)
        {
            return false;
        }
    }
        if (num<=1)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    