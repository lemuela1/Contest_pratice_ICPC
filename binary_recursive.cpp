#include<iostream>

using namespace std;

void binary_RECURSIVE(int num){

	int r = num % 2;
	num /= 2;

	if (num > 0){
		binary_RECURSIVE(num);
	};
	cout << r;
}

int main(){
	int a;
	cout << "enter your number: ";
	cin >> a;
	binary_RECURSIVE(a);
	cout << endl;
}