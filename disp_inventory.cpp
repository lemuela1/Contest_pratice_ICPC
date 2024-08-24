#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream Inventory;
    Inventory.open("inventory.txt");
    int number, quantity;
    double price;
    cout << "Below are the items in your inventory." << endl;
    cout << "Part#   Quantity      Item Price " << endl;

    while(Inventory >> number >> quantity >> price){
        cout <<"    "<< number << "          " << quantity << "       $"<< price << endl;
    }
    Inventory.close();
}