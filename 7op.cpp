#include <iostream>
using namespace std;
void patients(int, int);
int main()
{
    int days;
    int doc=7;
    cout << "Enter the number of days you visited the Hospital: ";
    cin >> days;
    patients(days,doc);
}
void patients(int days,int doc)
{
    int patients, treated=0, untreated=0;
    for(int i=1;i<=days;i++)
    {
        cout << "Number of patients who visited hospital on day " << i << ": " ;
        cin >> patients;
        if ( i%3==0 && i!=0 && untreated>treated)
        {
            doc++;
        }
        if (patients<=doc)
        {
            treated=treated+patients;
            untreated=untreated+0;
        }
        else if (patients>doc)
        {
            treated=treated+doc;
            untreated=untreated+patients-doc; 
        }
    }
    cout << "Treated patients:" << treated << endl;
    cout << "Untreated patients:" << untreated << endl;
}