#include<bits/stdc++.h>

using namespace std;

int main(){
    int T, t, c;
    bool res = true;
    cin >> T;
    for(int ea1 = 0; ea1 < T; ea1++){
        //num of tests
        cin >> t;
        auto nLis = vector<int> (t, 0);
        for(int ea2 = 0; ea2 < t; ++ea2){cin >> nLis.at(ea2);}



        //stringcase
        cin >> c;
        string str;
        for(int ea2 = 0; ea2 < c; ea2++){
            cin >> str;
            // cout << "\n\n" << str.size() << nLis.size() << "\n\n"; 
            if(str.size() != nLis.size()){cout << "NO\n"; continue;}

            // can not pre-allocate memory becasue we do not know the size of it.
            unordered_map<int, char> m1;
            unordered_map<char, int> m2;

            for(int ea3 = 0; ea3 < nLis.size(); ea3++){
                // "\n" <<  << "\n" << nLis[ea3] << endl <<
                
                //not included
                if((m1.find(nLis[ea3]) == m1.end()) && (m2.find(str[ea3]) == m2.end())){
                    m1[nLis[ea3]] =  str[ea3];
                    m2[str[ea3]] = nLis[ea3];
                }
                
                //included but not the case
                else if(m1[nLis[ea3]] != str[ea3] || m2[str[ea3]] != nLis[ea3]){
                    res = false;
                    break;
                }
                // cout << m1[nLis[ea3]] << endl << res << endl; 

            }
            cout << (res ? "Yes\n" : "No\n");
            res = true;
        }
    }
}