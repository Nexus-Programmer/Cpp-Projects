#include <iostream>
using namespace std;
#include <string>
int main()
{
    cout << "Text Printer" << endl;
    cout << " " << endl;

    string text;
    cout << "Enter the text you want to print: ";
    getline(cin, text);
    cout << " " << endl;

    int times;
    cout << "Enter the number of times to print the text: ";
    cin >> times;
    cout << " " << endl;

    for (int i = 0; i < times; ++i) {
        cout << text << endl;
    }

    return 0;
}