/*This is a program to build a Discount Price Calculator*/

// Declaring the iostream header file and declaring using namespace std
#include <iostream>
using namespace std;

// Main function
int main()
{
    cout << "\n";
    cout << "Discount Price Calculator \n"
         << endl;

    // Variables for the Cost Price and Discount Percentage
    double Price;
    double DiscountPercent;

    // Inputting cost price and discount percentage with some formatting
    cout << "Enter the price of the product: Rs.";
    cin >> Price;
    cout << "\nEnter the required discount: ";
    cin >> DiscountPercent;
    cout << "\n";

    // Variables for Calculation of Discount and Discounted Price
    double Discount = Price * DiscountPercent / 100;
    double DiscountedPrice = Price - Discount;

    // Printing the discount and discounted price with some formatting
    cout << "The discount of " << DiscountPercent << "%" << " for Rs." << Price << " is Rs." << Discount << endl;
    cout << "\nThe discounted price of the product is Rs." << DiscountedPrice;
    cout << "\n";
    return 0;
}
