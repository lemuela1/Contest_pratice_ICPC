#include <iostream>

using namespace std;

int main(){
	int r;
	int d, per_s, area_s;
	float cir_c, area_c, area_dif;

	cout << "Enter the value of the radius: ";
	cin >> r;

	d = 2 * r;
	per_s = 4 * d;
	area_s = d * d;
	cir_c = 6.28f * r;
	area_c = 3.14f * r * r;
	area_dif = area_s - area_c;
		
	cout << "The diameter of the circle is : " << d << endl
	<< "The circumference of the circle is : " << cir_c << endl
	<< "The area of the circle is : " << area_c << endl
	<< "The perimeter of the square is : " << per_s << endl
	<< "The area of the squre is : " << area_s << endl
	<< " The difference between the area of the square and the circle is : " << area_dif << endl;	

}
