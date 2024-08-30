#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main(){
    vector<int> list_O;
    vector<int> list_M;

    list_O.push_back(2);
    list_O.push_back(4);
    list_O.push_back(9);
    list_O.push_back(3);
    list_O.push_back(11);

    for(int i = 0; i < list_O.size(); i++){
        list_M.push_back(list_O[i]);
    }

    sort(list_M.begin(), list_M.end());



}