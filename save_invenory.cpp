#include <iostream>
#include <fstream>

using namespace std;

bool check_existence(int number){
    ifstream Inventory;
    Inventory.open("inventory.txt");
    int pnumber, pass, pass2;
    while(Inventory >> pnumber >> pass >> pass2){
        if(pnumber == number)return true;
    }
    return false;
}



int main(){
    int quantity, number = 1;
    float price;
    ofstream Inventory;
    Inventory.open("inventory.txt", ios_base::app);
    while(number != 0){
        cout << "Please enter item data (part number, quantity, price): " << endl;
        cin >> number >> quantity >> price;
        if(!number){break;}
        if(check_existence(number)){
            cout << "This part number already exist. Please try again." << endl;
            continue;
        }
        Inventory << "    " << number << "          " << quantity << "     " << price << endl;
    }
    Inventory.close();
}