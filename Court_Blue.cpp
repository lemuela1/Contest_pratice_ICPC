#include<bits/stdc++.h>
using namespace std;



bool gcd_1(long long n1, long long n2){
    long long temp;
    while(n2 != 0){
        temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    return (n1 == 1);
}

bool isPrime(const unsigned long long &x){
    if(!(x % 2) && x > 2){return false;}
    if(x <= 3){return x > 1;}
    for(unsigned int i = 3; i <= sqrt(x); i += 2){
        if((int)x % (int)i == 0){return false;}
    }
    return true;
}

unsigned long long lastPrime(unsigned long long a){
    if(isPrime(a)){a--;}
    if(a<=4){return a-=1;}
    else if(a == 5){return 3;}
    while(!isPrime(a)){
        a--;
    }
    return a;
}



unsigned long long Res(const unsigned long long &n, const unsigned long long &m, const unsigned long long &l, const unsigned long long &f){
    unsigned long long resp = 0;

    if(isPrime(n)){
        resp = n * l +(m-1) * f;
        return resp;
    }

    unsigned long long lp1 = lastPrime(n);
    unsigned long long lp2 = lastPrime(lp1);

    unsigned long long node[2] = {lp1, lp2};
    vector<unsigned long long> res_l;

    stack<unsigned long long *> trunk;

    if(gcd_1(lp1+1, lp2) && gcd_1(lp1, lp2+1)){
        trunk.push(node);
    }

    do{
        bool L = gcd_1(lp1 + 1, lp2), R = gcd_1(lp1, lp2 + 1);
        while(L || R){
            if(L){
            
            }

            else if(R){

            }
        }
    }
    while(trunk.size());

    // unsigned long long res1 = n * l + lp2 * f, res2 = lp1 * l + (lp1-1) * f;
    // unsigned long long res3 = 0;
    // if(lp1 >= 1000){for(unsigned long long i = lp2; i < lp1; i++){
    //     if(gcd_1(lp1 + 1, i) == 1){ res3 = (lp1 + 1) * l + i * f;}
    // }}



    // res_l.push_back(res1);
    // res_l.push_back(res2);
    // res_l.push_back(res3);
    sort(res_l.begin(), res_l.end());




    // cout << endl << lp1  << endl << lp2 << endl;
    return res_l[2];

    
}

int main(){
    // cout << isPrime(9);
    unsigned long long T;
    cin >> T;
    for(int i = 0; i < T; i++){
        unsigned long long n, m, l, f;
        cin >> n >> m >> l >> f;
        unsigned long long res = 0;

        if(l > f){
            res += Res(n, m, l, f);
        }

        else{
            res += Res(m, n, f, l);
        }
        // cout << endl << lastPrime(5) << endl;
        // cout << endl << lastPrime(4);
        cout << res << endl;

    }
}