#include <iostream>
#include <string>

using namespace std;

int main(){
    int r, f, res;
    cin >> r >> f;
    res = ((f %(2 * r)) * 2) * 100 / r - 100;
    cout << ((res < 200 && res > 0) ? "down" : "up");
}