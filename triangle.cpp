#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a, b, Area;
    float Perimeter;
    cout << "This programs computes the area and perimeter of a right triangle.\nEnter the value of leg a: ";
    cin >> a;
    cout << "Enter the value of leg b: ";
    cin >> b;

    Area = (a * b) / 2;
    Perimeter = sqrt(a * a + b * b);

    cout << " The area of the triangle is " << Area << endl;
    cout << " The Perimeter of the triangle is " << Perimeter << endl;

}
