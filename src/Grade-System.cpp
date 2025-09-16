#include <iostream>
using namespace std;
int main()
{
    // Variables
    double marks;
    // Input and Output
    cout<<"Enter the total marks: ";
    cin>>marks;
    // Calculation
    if (marks>=90&&marks<=100)
    cout<<"\nThe grade obtained is A+";
    else if (marks>=75&&marks<=89)
    cout<<"\nThe grade obtained is A";
    else if (marks>=60&&marks<=74)
    cout<<"\nThe grade obtained is B";
    else if (marks>=40&&marks<=59)
    cout<<"\nThe grade obtained is C";
    else
    cout<<"\nThe grade obtained is F";
    return 0;
}