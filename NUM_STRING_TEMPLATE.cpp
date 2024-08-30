#include<bits/stdc++.h>

using namespace std;

int main(){
    int T, n, m, res = 1;
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> n;
        vector<int> num_C;
        for(int j = 0; j < n; j++){
            int num;
            cin >> num;
            num_C.push_back(num);
        }

        cin >> m;
        for(int j = 0; j < m; j++){
            string str;
            cin >> str;
            vector<int> mp;
            vector<char> mp_i;
            for(int k = 0; k < num_C.size(); k++){

                char ch = str[k];

                if(str.size() != num_C.size()){res = 0; break;}

                // cout << endl << num_C[k] << endl << ch << endl;
                int T1 = 0, T2 = 0;

                for(int l = 0; l < mp.size(); l++){
                    if(mp[l] == num_C[k]){break;}
                    T1++;
                }

                for(int l = 0; l < mp_i.size(); l++){
                    if(mp_i[l] == ch){break;}
                    T2++;
                }

                // cout << T1 << T2 << endl;

                if((T1 == mp.size()) && (T2  == mp.size())){
                    mp.push_back(num_C[k]);
                    mp_i.push_back(ch);
                }
                else if(T1 == T2){continue;}
                else{res = 0; break;}
            }
            cout << (res ? "YES" : "NO") << endl;
            res = 1;
        }
    }
}