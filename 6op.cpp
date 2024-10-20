#include <iostream>
using namespace std;
bool prime(int num);
int primoral(int num);
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "Primoral: " << primoral(num);
}
bool prime(int num)
{
    for (int no=2;no<num;no++)
    {
        if(num%no==0)
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
int primoral(int num)
{
    int primepro = 1;
    int number = 2;
    int primecount = 0;
    while (primecount<num)
    {
        if (prime(number))
        {
            primepro=primepro*number;
            primecount++;
        }
        number++;
    }
    return primepro;
}
    