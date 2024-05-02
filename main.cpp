//Github Link:
//https://github.com/SebastianHahsler/zyLab-28.14.git
//Group Members: Tierney Clark and Sebastian Hahsler

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
void PrintMenu() { 
    cout << "\nMENU" << endl;
    cout << "a - Add item to cart" << endl;
    cout << "d - Remove item from cart" << endl;
    cout << "c - Change item quantity" << endl;
    cout << "i - Output items' descriptions" << endl;
    cout << "o - Output shopping cart" << endl;
    cout << "q - Quit\n" << endl;
    //cout << "\nChoose an option:" << endl; //No end Line
}

char GetMenuOption() {
   cout << "Choose an option:" << endl; //No end Line
    char option;
    cin >> option;
    cin.ignore(); // Clear the newline character or any extra input
    return option;
}

void ExecuteMenu(char option, ShoppingCart& cart) {
    string name, description;
    int price, quantity;

    switch (option) {
        case 'a': {
            cout << "\nADD ITEM TO CART" << endl;
            cout << "Enter the item name:" << endl;
            getline(cin, name);
            cout << "Enter the item description:" << endl;
            getline(cin, description);
            cout << "Enter the item price:" << endl;
            cin >> price;
            cout << "Enter the item quantity:" << endl;
            cin >> quantity;
            cin.ignore(); // Clear newline character after numeric input

            ItemToPurchase newItem(name, description, price, quantity);
            cart.AddItem(newItem);
            break;
        }
        case 'd': {
            cout << "\nREMOVE ITEM FROM CART" << endl;
            cout << "Enter name of item to remove:" << endl;
            getline(cin, name);
            cart.RemoveItem(name);
            break;
        }
        case 'c': {
            cout << "\nCHANGE ITEM QUANTITY" << endl;
            cout << "Enter the item name:" << endl;
            getline(cin, name);
            cout << "Enter the new quantity:" << endl;
            cin >> quantity;
            cin.ignore(); // Clear newline character after numeric input

            ItemToPurchase modItem;
            modItem.SetName(name);
            modItem.SetQuantity(quantity);
            cart.ModifyItem(modItem);
            break;
        }
        case 'i':
            cout << "\nOUTPUT ITEMS' DESCRIPTIONS" << endl;
            cart.PrintDescriptions();
            break;
        case 'o':
            cout << "OUTPUT SHOPPING CART" << endl;
            cart.PrintTotal();
            break;
        case 'q':
            break;
        default:
            break;
    }
}
