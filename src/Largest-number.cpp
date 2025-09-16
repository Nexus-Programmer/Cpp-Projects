#include <iostream>
using namespace std;
int main()
{
    // Variables
    double num1, num2, num3, num4, max1, max2, largest;
    // Input and Output
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"\nEnter the second number: ";
    cin>>num2;
    cout<<"\nEnter the third number: ";
    cin>>num3;
    cout<<"\nEnter the fourth number: ";
    cin>>num4;
    // Comparison of first two digits
    if (num1>num2)
    max1 = num1;
    else
    max1 = num2;
    // Comparison of first last digits
    if (num3>num4)
    max2 = num3;
    else
    max2 = num4;
    // Comparison of the two sets
    if (max1>max2)
    largest = max1;
    else
    largest = max2;
    // Printing the largest number
    cout<<"\nThe largest number is: "<<largest<<endl;
    return 0;
}