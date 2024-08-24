#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int number_input, number_output;

	cout << "Enter your number: ";
	cin >> number_input;
	
	for (int exponent = 0; (number_input % (int)pow(2, exponent))/(int)pow(2, exponent); exponent++){
		if(number_input % (int)pow(2, exponent + 1)){
			number_output += (int)pow(10, exponent);
		};
	};

	cout << "Your binary number is: " << number_output << endl;
	
}
