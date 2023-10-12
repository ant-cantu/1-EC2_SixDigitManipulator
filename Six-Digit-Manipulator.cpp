//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
//* Program name    : L1-ExtraCreditB                                   * 
//*                                                                     * 
//* Written by      : Anthony Cantu                                     * 
//*                                                                     * 
//* Purpose         : To take a six digit positive integer and          *
//*                   seperate the number by making the 1st, 3rd        *
//*                   and 5th digit into one number and the 2nd,        *
//*                   4th, and 6th digit into one number. Once the      *
//*                   numbers are seperated, the sum, difference,       *
//*                   product, and quotient of the two numbers are      *
//*                   calculated.                                       *
//*                                                                     * 
//* Inputs          : User enters one six digit integer value           * 
//*                                                                     * 
//* Outputs         : Outputs the seperated digits into their own       *
//*                   numbers and the calculated values.                * 
//*                                                                     * 
//* Calls           : No internal or external calls                     * 
//*                                                                     * 
//* Structure       : BEGIN                                             * 
//*                        Straight line code no sub-processes          * 
//*                   STOP                                              * 
//*                        End of Program                               * 
//*                                                                     * 
//*---------------------------------------------------------------------* 
//* Collaboration   :                                                   * 
//*                                                                     * 
//*---------------------------------------------------------------------* 
//* Change Log:                                                         * 
//*                         Revision                                    * 
//*       Date    Changed  Rel Ver Mod Purpose                          * 
//* 09/06/23      acantu 000.000.000 Initial release of program         * 
//*                                                                     * 
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * 
#include <iostream> 
#include <iomanip>

using namespace std;

int main()
{
    char char1, char2, char3,
        char4, char5, char6;

    int num1, num2, num3,
        num4, num5, num6;

    int x = 0, y = 0;

    int diff;

    cout << fixed << showpoint << setprecision(3);
    cout << setfill(' ');
    cout << "Anthony Cantu\t" << "L1-ExtraCreditB\t" << "L1-ExtraCreditB.exe" << endl;

    cout << "Enter a 6 digit positive integer. -->";

    cin.get(char1);
    cin.get(char2);
    cin.get(char3);
    cin.get(char4);
    cin.get(char5);
    cin.get(char6);

    //Math Time
    num1 = (char1 - 48); //if input character 1 = 49, 49 - (character 0) 48 = 1
    num2 = (char2 - 48); //in input character 3 = 51, 51 - 48 = 3
    num3 = (char3 - 48);
    num4 = (char4 - 48);
    num5 = (char5 - 48);
    num6 = (char6 - 48);

    x = (x * 10) + num1;
    x = (x * 10) + num3;
    x = (x * 10) + num5;

    y = (y * 10) + num2;
    y = (y * 10) + num4;
    y = (y * 10) + num6;

    //Find Difference
    diff = fabs(x - y);

    cout << endl; //Line Break

    cout << "The number X is formed by the 1st, 3rd, and 5th digit: " << x << endl;
    cout << "The number Y is formed by the 2nd, 4th, and 6th digit: " << y << endl;

    cout << right << setw(27) << "Sum of X and Y is: "
        << left << x + y << endl;

    cout << right << setw(27) << "Difference of X and Y is: "
        << left << diff << endl;

    cout << right << setw(27) << "Product of X and Y is: "
        << left << x * y << endl;

    cout << right << setw(27) << "Quotient of X and Y is: "
        << left << static_cast<double>(x) / static_cast<double>(y) << endl;
    
    char q;
    cout << "\nPress any key to Exit.";
    cin.ignore(2, '\n');
    cin.get(q);

    return 0;
}
