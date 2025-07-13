#include <iostream>
using namespace std;
int main()
{
    cout<<"Discounted Price Calculator"<<endl;
	cout<<" "<<endl;
    double cost;
    cout<<"Enter the cost of the product: Rs.";
    cin>>cost;
	cout<<" "<<endl;
    double discountpercent;
    cout<<"Enter the discount percentage for the product: ";
    cin>>discountpercent;
	cout<<" "<<endl;
    double discount = cost*discountpercent/100;
    double finalprice = cost-discount;
    cout<<"The discounted price is Rs."<<finalprice<<endl;
    return 0;
}
