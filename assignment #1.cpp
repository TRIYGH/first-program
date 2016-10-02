//T. Robert Ward
//May 21, 2013
//Learning C++

#include <iostream>

using namespace std;

int main()
{
// declare vars

    double price1;
    double price2;
    double price3;
    double price4;
    double price5;
    double averagePrice;
    double tax;
    double total;
    double grandTotal;
    int theCount = 1

    //get the 5 items

    cout << "Enter in item #" << theCount << "'s price: ";
    cin >> price1;
    theCount = theCount + 1;
    cout << "Enter in item #" << theCount << "'s price: ";
    cin >> price2;
    theCount = theCount + 1;
    cout << "Enter in item #" << theCount << "'s price: ";
    cin >> price3;
    theCount = theCount + 1;
    cout << "Enter in item #" << theCount << "'s price: ";
    cin >> price4;
    theCount = theCount + 1;
    cout << "Enter in item #" << theCount << "'s price: ";
    cin >> price5;

    // calc it

    total = price1 + price2 + price3 + price4 + price5;
    tax = total * .06;
    grandTotal = total + tax;

    // display it

    cout << "Your Subtotal = " << total << endl;
    cout << "Your Tax = " << tax << endl;
    cout << "Your Grand Total = " << grandTotal;


    return 0;
}
