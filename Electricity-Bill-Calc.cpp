#include <iostream>
using namespace std;
int main()
{
    // Variables
    int units, unitprice;
    // Input and Output
    cout<<"Enter the number of electricity units consumed: ";
    cin>>units;
    // Calculating the bill
    if (units>=0&&units<=100)
    unitprice = 5*units;
    else if (units>=101&&units<=200)
    unitprice = 7*units;
    else
    unitprice = 10*units;
    // Printing the bill
    cout<<"The electricity bill comes to a total of Rs."<<unitprice<<endl;
    return 0;
}