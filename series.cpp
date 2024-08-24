#include<iostream>

using namespace std;

int main(){
    int Num;
    int res;
    cout << "Enter a integer: ";
    cin >> Num;

    for(int i = 1;i <= Num; i++){
        res += ((i % 2) ? 1 : -1) * i * i;
    }
    cout << "Your number is: " << res << endl;
}
