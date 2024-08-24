#include<iostream>

using namespace std;

double square_root(int num){

    double guess = 0, factor = 1;
    while(1){
        if(factor <= 0.000001){
            break;
        }

        if(guess * guess - num < 0){
            guess += 1 * factor;
        }
        else if(guess * guess - num == 0){
            break;
        }
        else{
            guess -= 1 * factor;
            factor /= 10;
        }
        cout << guess << endl;
    }
    return(guess);
}

int main(){
    int number;
    cout << "Enter a number: \n";
    cin >> number;
    cout << "\n";
    square_root(number);

}

