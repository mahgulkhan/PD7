#include <iostream>
using namespace std;
void amplification(int num);
main()
{
    int num;
    cout << "Enter the number to Amplify: ";
    cin >> num;
    amplification(num); //function call
}
void amplification(int num)
{
    
    for(int no = 1; no <= num ; no++)
    {
        if (no%4 ==0) //to check if number is divisible by 4
        {
          cout << (no*10) << ","; //amplification
        }
        else
        {
            cout << no << ",";
        }
    }
}