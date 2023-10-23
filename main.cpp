#include <iostream>


int main() {

     const int DOLLAR {100};
     const int QUARTER {25};
     const int DIME{10};
     const int NICKEL {5};

     int changeAmount{0},runningBalance{0}, dollars{0}, quarters{0}, dimes{0}, nickels{0}, pennies{0};
    std::cout << "Enter the Change amount: ";
    std::cin >> changeAmount;

     while (changeAmount > 0) {
             dollars = changeAmount / DOLLAR;
             runningBalance = changeAmount % DOLLAR;

             quarters = runningBalance / QUARTER;
             runningBalance = runningBalance % QUARTER;

             dimes = runningBalance / DIME;
             runningBalance = runningBalance % DIME;

             nickels = runningBalance / NICKEL;
             runningBalance = runningBalance % NICKEL;
             pennies = runningBalance;

         std::cout << "Dollars change: " << dollars << std::endl;
         std::cout << "Quarters change: " << quarters << std::endl;
         std::cout << "Dimes change: " << dimes << std::endl;
         std::cout << "Nickels change: " << nickels << std::endl;
         std::cout << "Pennies change: " << pennies << std::endl;
        std::cout << "Enter the change amount: ";
        std::cin >> changeAmount;

     }


    return 0;
}