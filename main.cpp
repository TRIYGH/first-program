//T. Robert Ward
//May 21, 2013
//Learning C++

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello" << "Robert" << "Ward" << endl;

    //NEXT PROGRAM
    //declare variables

    double payRate = 100.00;
    double hours = 40;
    double grossPay;

    //calulation

    grossPay = payRate*hours;

    // show results

    cout << "your gross pay is " << grossPay << endl;

    //PROGRAM #2
    // Inputing amounts
    //declare variables

    double payRateX;
    double hoursX;
    double grossPayX;

    //get input

    cout << "enter the payrate:  ";
    cin >> payRateX;
    cout << "enter hours:  ";
    cin >> hoursX;

    //calulation

    grossPayX = payRateX*hoursX;

    // show results

    cout << "your gross pay is " << grossPayX << endl;

    //PROGRAM 3
    // average test scores

    // declare var's

    double grade1;
    double grade2;
    double grade3;
    double average;

    cout << "Enter grade #1 ";
    cin >> grade1;
    cout << "Enter grade #2 ";
    cin >> grade2;
    cout << "Enter grade #3 ";
    cin >> grade3;

    // calc it

    average = (grade1 + grade2 + grade3)/3;

    // show results

    cout << "Your average = " << average << endl;

     //PROGRAM 3
    // average test scores

    // declare var's

    double grades[5];
    int thecount = 1;
    int howMany;
    double averageX;

    cout << "How many grades do you have? ";
    cin >> howMany;

    //loop
    do{

    cout << "Enter grade #" << thecount << " ";
    cin >> grades[thecount];

    thecount = thecount + 1;

    while (thecount = howMany + 1);

    }

    // calc it

    averageX = ( grades[1] + grades[2] + grades[3] + grades[4] + grades[5] )/howMany;

    // show results

    cout << "Your average = " << averageX << endl;

// PROGRAM 4

    const double extraCredit = 6
    return 0;
}
