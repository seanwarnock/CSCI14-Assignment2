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
#include <math.h>
#ifdef _WIN32
  #include <windows.h>
  #include <winsock2.h>
#endif
#ifdef __linux__

#endif
using namespace std;

int HTTP_Test ()
{

}

int main ()
{

//Local variables
  const float floatMilkChocolate = 8.50;
  const float floatDarkEuropeanChocolate = 9.75;
  const float floatWhiteChocolate = 10.50;
  const float floatEuropeanTruffles = 12.50;


  float floatDiscountRate = 0;

  const float floatShippRate = .10;

  float floatMenuChoice;
  int intMenuChoice;

  char charRunAgain;

  do
  {

    char boolCompleteOrder = false;

    float floatMilkChocolateQuantity = 0;
    float floatDarkEuropeanChocolateQuantity = 0;
    float floatWhiteChocolateQuantity = 0;
    float floatEuropeanTrufflesQuantity = 0;
    float floatSubTotal = 0;
    float floatTotal = 0;

    do
    {
      float floatQuantity = 0;


//setup text display environment.
      system("cls");
      cout.unsetf(ios::floatfield);
      cout.precision(2);
      cout.setf(ios::fixed, ios::floatfield);
      cout.setf(ios::showpoint);


      cout << setw(5) << ""    << setw(30) << "Description"             << setw(17) << "Price per lbs"            << setw(15) << "Ext Price"                                                              << endl;
      cout << setw(5) << "[1]" << setw(30) << "Milk Chocolate"          << "  $" << setw(15) << right << floatMilkChocolate         << "  $" << setw(15) << right << (floatMilkChocolate * floatMilkChocolateQuantity)                 << endl;
      cout << setw(5) << "[2]" << setw(30) << "Dark European Chocolate" << "  $" << setw(15) << right << floatDarkEuropeanChocolate << "  $" << setw(15) << right << (floatDarkEuropeanChocolate * floatDarkEuropeanChocolateQuantity) << endl;
      cout << setw(5) << "[3]" << setw(30) << "WhiteChocolate"          << "  $" << setw(15) << right << floatWhiteChocolate        << "  $" << setw(15) << right << (floatWhiteChocolate * floatWhiteChocolateQuantity)               << endl;
      cout << setw(5) << "[4]" << setw(30) << "European Truffles"       << "  $" << setw(15) << right << floatEuropeanTruffles      << "  $" << setw(15) << right << (floatEuropeanTruffles * floatEuropeanTrufflesQuantity)           << endl;
      cout << setw(5) << "[9]" << setw(30) << "Complete Order?" << endl;
      cout << endl;
      floatSubTotal = (floatMilkChocolate * floatMilkChocolateQuantity) + (floatDarkEuropeanChocolate * floatDarkEuropeanChocolateQuantity) + (floatWhiteChocolate * floatWhiteChocolateQuantity) + (floatEuropeanTruffles * floatEuropeanTrufflesQuantity);

      if (floatSubTotal  < 20)
        {
           floatDiscountRate = 0;
           cout << "Discount of %" << int(floatDiscountRate * 100) << endl;
        }
      else if (floatSubTotal < 40)
        {
          floatDiscountRate = .10;
          cout << "Discount of %" << int(floatDiscountRate * 100) << endl;
        }
      else if (floatSubTotal < 60)
        {
          floatDiscountRate = .15;
          cout << "Discount of %" << int(floatDiscountRate * 100) << endl;
        }
      else if (floatSubTotal < 80)
        {
          floatDiscountRate = .20;
          cout << "Discount of %" << int(floatDiscountRate * 100) << endl;
        }
      else
        {
          floatDiscountRate =.25;
          cout << "Discount of %" << int(floatDiscountRate * 100) << endl;
        }


      cin >> floatMenuChoice;
      intMenuChoice = floatMenuChoice;
      switch (intMenuChoice)
      {
        case 1 : cout << "How much milk chocolate would you like to purchase in lbs? :";
          cin >> floatQuantity;
          floatMilkChocolateQuantity = floatMilkChocolateQuantity + fabs(floatQuantity);
          break;
        case 2 : cout << "How much Dark European Chocolate would you like to purchase in lbs? :";
          cin >> floatQuantity;
          floatDarkEuropeanChocolateQuantity = floatDarkEuropeanChocolateQuantity + fabs(floatQuantity);
          break;
        case 3 : cout << "How much White Chocolate would you like to purchase in lbs? :";
          cin >> floatQuantity;
          floatWhiteChocolateQuantity = floatWhiteChocolateQuantity + fabs(floatQuantity);
          break;
        case 4 : cout << "How much European Truffles would you like to purchase in lbs? :";
          cin >> floatQuantity;
          floatEuropeanTrufflesQuantity = floatEuropeanTrufflesQuantity + fabs(floatQuantity);
          break;
        case 9 : boolCompleteOrder = true;
      }
    }
    while (boolCompleteOrder == false);

    system("cls");
//consider trying to use justification formatting for ios

    floatTotal = floatSubTotal - (floatSubTotal * floatDiscountRate);
    cout << "Invoice Order" << endl;
    cout << setw(23) << left << "Description"             << setw(15) << right << "Qty in lbs"            << setw(15) << right << "Ext Price" << endl;

    if (!(floatMilkChocolateQuantity <= 0))
    {
      cout << setw(23) << left << "Milk Chocolate" << setw(15) << right << floatMilkChocolateQuantity << setw(15) << right << (floatMilkChocolate * floatMilkChocolateQuantity) << endl;
      //cout << floatMilkChocolateQuantity << " lbs of Milk Chocolate Ordered @ $" << (floatMilkChocolate * floatMilkChocolateQuantity) << " per LB\n";
    }

    if (!(floatDarkEuropeanChocolateQuantity <= 0))
    {
      cout << setw(23) << left << "Dark Chocolate" << setw(15) << right << floatDarkEuropeanChocolateQuantity << setw(15) << right << (floatDarkEuropeanChocolate * floatDarkEuropeanChocolateQuantity) << endl;
      //cout << floatDarkEuropeanChocolateQuantity << " lbs of Dark European Chocolate Ordered @ $" << (floatDarkEuropeanChocolate * floatDarkEuropeanChocolateQuantity) << " per LB\n";
    }

    if (!(floatWhiteChocolateQuantity <= 0))
    {
      cout << setw(23) << left << "Dark Chocolate" << setw(15) << right << floatWhiteChocolateQuantity << setw(15) << right << (floatWhiteChocolate * floatWhiteChocolateQuantity) << endl;
      //cout << floatWhiteChocolateQuantity << " lbs of White Chocolate Ordered @ $" << (floatWhiteChocolate * floatWhiteChocolateQuantity) << " per LB\n";
    }

    if (!(floatEuropeanTrufflesQuantity <= 0))
    {
      cout << setw(23) << left << "Dark Chocolate" << setw(15) << right << floatEuropeanTrufflesQuantity << setw(15) << right << (floatEuropeanTruffles * floatEuropeanTrufflesQuantity) << endl;
      //cout << floatEuropeanTrufflesQuantity << " lbs of European Truffles Ordered @ $" << (floatEuropeanTruffles * floatEuropeanTrufflesQuantity) << " per LB\n";
    }

    cout << setw(23) << "Total Order is $" << setw(30) << right << floatSubTotal << "\n";
    cout << setw(23) << "Less: Discount of " << setw(10) << right << int(floatDiscountRate * 100) << "% $"  << setw(17) << right <<  (floatSubTotal * floatDiscountRate) << "\n";
    cout << setw(23) << "Order is $" << setw(30) << right << floatTotal << "\n";
    cout << setw(23) << "Shipping and Handling @ " << setw(10) << right << int(floatShippRate * 100) << "% (based on $" << floatTotal << " $" << (floatShippRate * floatTotal) << "\n";
    cout << "------------------------------------------------------------" << endl;
    cout << setw(23) << "Grand Total is $" << setw(30) << right << (floatShippRate * floatTotal) + floatTotal << "\n";

    cout << "You know you want to place another order for more Chocolate? [Y] or N: ";
    cin >> charRunAgain;

//Yes I can add numbers to character!  Cheesy way to only check for one type of character in this case but ugly as heck.
    if (!(charRunAgain < 91))
    {
      charRunAgain = charRunAgain - 32;
    }
  }
  while (charRunAgain == 'Y');
  return 0; //Yup still here so stdout doesn't show this program exiting with an error.
}
