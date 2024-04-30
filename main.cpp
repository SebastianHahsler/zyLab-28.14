#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"

void PrintMenu() {
   /* Type your code here */
   
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
   /* Type your code here */
   
}
char GetMenuOption() {
    
}
int main() {
   string customerName;
    string date;
   
    cout << "Enter customer's name:" << endl;
    getline(cin, customerName);
    cout << "Enter today's date:" << endl;
    getline(cin, date);

    ShoppingCart shoppingCart(customerName, date);

    cout << "\nCustomer name: " << customerName << endl;
    cout << "Today's date: " << date << endl;
 
   PrintMenu(); 

    char menuOption = ' ';
    menuOption = GetMenuOption();
    do {
      if (menuOption == 'a' || menuOption == 'd' || menuOption == 'c' || menuOption == 'i' || menuOption == 'o'){
         ExecuteMenu(menuOption, shoppingCart);
         PrintMenu();
         menuOption = GetMenuOption();
      }
      else{
         menuOption = GetMenuOption();
      }
    } while (menuOption != 'q');

   return 0;
}
