#include <iostream>
#include <iomanip>
using namespace std;
void avgprice(int);
int main()
{
    int cargocount;
    cout << "Enter the count of cargo for transportation: ";
    cin >> cargocount;
    avgprice(cargocount);
}
void avgprice(int cargocount)
{
    int tonne;
    double mbus=0, truck=0, train=0,totaltonnes=0,avgprice,mpercent,trpercent,trainpercent ;
    for (int i=0; i< cargocount; i++)
    {
        cout << "Enter tonnage of cargo" << i+1 << ": " ;
        cin >> tonne;
        totaltonnes= totaltonnes+tonne;
        if ( tonne<=3)
        {
            mbus = mbus+tonne;
        }
        else if (tonne<=11)
        {
            truck=truck +tonne;
        }
        else
        {
            train=train+tonne;
        }
    }
    avgprice=(mbus*200+truck*175+train*120)/totaltonnes;
    cout << fixed << setprecision(2) << avgprice<< "%" <<endl;
    mpercent=(mbus/totaltonnes)*100;
    cout << fixed << setprecision(2) << mpercent << "%" <<endl;
    trpercent=(truck/totaltonnes)*100;
    cout << fixed << setprecision(2) << trpercent << "%" <<endl;
    trainpercent=(train/totaltonnes)*100;
    cout << fixed << setprecision(2) << trainpercent << "%" <<endl;
    
}
