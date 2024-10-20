#include <iostream>
using namespace std;
float triangle(float dots);
int main()
{
    float dots;
    cout << "Enter number of triangles: ";
    cin >> dots;
    cout << " Dots in the triangle: " << triangle(dots); // function call
}
float triangle(float dots)
{
    float result;
    result=dots*((dots+1)/2); //formula to calculate dots
    return result; //returning value of number of dots
}