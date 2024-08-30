#include<bits/stdc++.h>

using namespace std;

int main(){
    int T, num;
    int d1, d2, d3;
    bool B;
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> num;
        int d1 = num, d2, d3;
        int ind = 0;
        while (d1 >= 10)
        {
            d1 /= 10;
            ind++;
        }

        d2 = (num - d1 * pow(10, ind)) / pow(10, ind-1) ;
        d3 = (num - d1 * pow(10, ind) - d2 * pow(10, ind-1)) / pow(10, ind-2) ;

        // cout << d1 << endl << d2 << endl  << d3 << endl;
        
        if(d1 == 1 && d2 == 0 && num - d1 * pow(10, ind) - d2 * pow(10, ind-1) >= 2 && d3 != 0){
            cout << "YES" << endl;
        }
        else{cout << "NO" << endl;}
    }

}