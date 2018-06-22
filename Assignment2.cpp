/*
Sean Warnock
CSCI 14 Summer 2018
Assignment 2 due 6/28/2018
https://github.com/seanwarnock/CSCI14-Assignment2
*/


/*
Start program
output order menu
tell user amount to get next discount.
take input from user until user selects "done"

output invoice.
ask user if you want another order?
*/
#include <iostream>
#include <iomanip>
#ifdef _WIN32
  #include <windows.h>
  using namespace std;
#endif

using namespace std;

int main ()
{

//Local variables
  const float floatMilkChocolate = 8.50;
  const float floatDarkEuropeanChocolate = 9.75;
  const float floatWhiteChocolate = 10.50;
  const float floatEuopeanTruffles = 12.50;


  float floatDiscountRate = 0;

  const float floatShippRate = .10;

  int intMenuChoice;

  char charRunAgain;

  do
  {

    char boolCompleteOrder = false;

    float floatMilkChocolateQuantity = 0;
    float floatDarkEuropeanChocolateQuantity = 0;
    float floatWhiteChocolateQuantity = 0;
    float floatEuopeanTrufflesQuantity = 0;

    do
    {
      float floatQuantiry = 0;



      system("cls");
      cout.unsetf(ios::floatfield);
      cout.precision(2);
      cout << cout.width(4) << "Description " << "  - Price per lbs " << "- Ext Price\n";
      cout << "[1]" << cout.width(3) << "Milk Chocolate $" << "" << floatMilkChocolate << " " << (floatMilkChocolate * floatMilkChocolateQuantity) << "\n";
      cout << "[2]" << cout.width(3) << "Dark European Chocolate $" << "" << floatDarkEuropeanChocolate << " " << (floatDarkEuropeanChocolate * floatDarkEuropeanChocolateQuantity) << "\n";
      cout << "[3]" << cout.width(3) << "WhiteChocolate $" << "" << floatWhiteChocolate << " " << (floatWhiteChocolate * floatWhiteChocolateQuantity) << "\n";
      cout << "[4]" << cout.width(3) << "Euopean Truffles $" << "" << floatEuopeanTruffles << " " << (floatEuopeanTruffles * floatEuopeanTrufflesQuantity) << "\n";
      cout << "[9]" << cout.width(3) << "Complete Order?";

      cin >> intMenuChoice;

      switch (intMenuChoice)
      {
        case 1 : cout << "Milk";
          break;
        case 2 : cout << "Dark";
          break;
        case 3 : cout << "White";
          break;
        case 4 : cout << "Truffles";
          break;
        case 9 : boolCompleteOrder = true;

      }

    }
    while (boolCompleteOrder == false);
    /* Discount rates
  0 - 19.99 %0
  20 - 39.99 %10
  40 - 59.99 %15
  60 - 79.99 %20
  80 > %25
  */

  //for forcing the range to a integer use multiply by 100 to make my dollar amount an integer.

    system("cls");
    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    cout.setf(ios::showpoint);



//consider trying to use justification formatting for ios
    cout << "Invoice Order\n";

    cout << "lbs of Milk Chocolate Ordered @ $" << floatMilkChocolate << " per LB\n";
    cout << "lbs of Dark European Chocolate Ordered @ $" << floatDarkEuropeanChocolate << " per LB\n";
    cout << "lbs of White Chocolate Ordered @ $" << floatWhiteChocolate << " per LB\n";
    cout << "lbs of Euopean Truffles Ordered @ $" << floatEuopeanTruffles << " per LB\n";

    cout << "Total Order is" << "$" << "Will be sum of order pre discount\n";
    cout << "Less: Discount of " << floatDiscountRate << "%\n";

    cout << "Order is" << "Some order total\n";
    cout << "Shipping and Handling @ " << (floatShippRate * 10) << "%\n";

    cout << "Should I really ask if you want more Chocolate? [Y] or N: ";
    cin >> charRunAgain;
  }
  while (charRunAgain == 'Y');
  return 0; //Yup still here so stdout doesn't show this program exiting with an error.
}
