NEED HELP WITH THIS CODING HOMEWORK :(( C++ Programming.

Instructions
Redo Programming Exercise 16 of Chapter 4 so that all 
the named constants are defined in a namespace royaltyRates.

Instructions for Programming Exercise 16 of Chapter 4 
have been posted below for your convenience.

Exercise 16
A new author is in the process 
of negotiating a contract for a 
new romance novel. The publisher is 
offering three options. In the first option, 
the author is paid $5,000 upon delivery of the final
manuscript and $20,000 when the novel is published. 
In the second option, the author is paid 12.5% of the net 
price of the novel for each copy of the novel sold. In the 
third option, the author is paid 10% of the net price for 
the first 4,000 copies sold, and 14% of the net price for the 
copies sold over 4,000. The author has some idea about the number 
of copies that will be sold and would like to have an estimate of 
the royalties generated under each option. Write a program that 
prompts the author to enter the net price of each copy of the novel 
and the estimated number of copies that will be sold. The program 
then outputs the royalties under each option and the best option the 
author could choose. (Use appropriate named constants to store the 
special values such as royalty rates and fixed royalties.)


MY CODE: 
#include <iostream>

using namespace std;

namespace royaltyRates {
    const double FIXED_ROYALTY = 5000.0;
    const double FINAL_ROYALTY = 20000.0;
    const double OPTION2_RATE = 0.125;
    const double OPTION3_RATE1 = 0.10;
    const double OPTION3_RATE2 = 0.14;
    const int OPTION3_THRESHOLD = 4000;
 }

int main() {
    double netPrice, royalties1, royalties2, royalties3;
    int numSold;
    using namespace royaltyRates;

    cout << "Enter the net price of each copy of the novel: $";
    cin >> netPrice;
    cout << "Enter the estimated number of copies that will be sold: ";
    cin >> numSold;
  
    royalties1 = FIXED_ROYALTY + FINAL_ROYALTY;
    royalties2 = OPTION2_RATE * netPrice * numSold;
    if (numSold > OPTION3_THRESHOLD) {
        royalties3 = OPTION3_RATE1 * netPrice * OPTION3_THRESHOLD +
                     OPTION3_RATE2 * netPrice * (numSold - OPTION3_THRESHOLD);
    } else {
        royalties3 = OPTION3_RATE1 * netPrice * numSold;
    }

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Royalties under option one: $" << royalties1 << endl;
    cout << "Royalties under option two: $" << royalties2 << endl;
    cout << "Royalties under option three: $" << royalties3 << endl;

    if (royalties1 >= royalties2 && royalties1 >= royalties3)
        cout << "The best option is option one." << endl;
    else if (royalties2 >= royalties1 && royalties2 >= royalties3)
        cout << "The best option is option two." << endl;
    else
        cout << "The best option is option three." << endl;
        
    return 0;
}

TASKS: Im not getting these :(

Test Case: Incomplete
Successful Output

Test Case: Incomplete
Successful Output II

Code Pattern: Complete
Check for constant declaration in 
namespace

