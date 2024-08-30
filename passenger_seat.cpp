#include<bits/stdc++.h>

using namespace std;

int main(){

    int T, t, n, CA = 1;
    cin >> T;
    for(int j = 0; j < T; j++){
        cin >> t;
        cin >> n;
        int L = n-1, R = n+1;
        // cout << "\n\n" << L <<n<< R << "\n\n";
        for(int i = 0; i < t -1; i++){
            cin >> n;
            // cout << n << endl;
            if(L == n){L--;}
            else if(R == n){R++;}
            else{CA = 0;}
        }
        cout << (CA ? "YES" : "NO") << endl;
        CA = 1;
    }
}