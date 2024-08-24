#include<iostream>

using namespace std;

int main(){
    int number_input;
    cout << "please enter your number: ";
    cin >> number_input;


    for(int i = 1; i <= number_input; i++){
        int space = (number_input-i)/2;
        for(int j = 0; j < space; j++){
            cout << " ";
        }
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        for(int j = 0; j < space; j++){
            cout << " ";
        }
        cout << '\n';
        i++;
    }

    for(int i = number_input-2; i >= 1; i--){
        int space = (number_input-i)/2;
        for(int j = 0; j < space; j++){
            cout << " ";
        }
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        for(int j = 0; j < space; j++){
            cout << " ";
        }
        cout << '\n';
        i--;
    }
}