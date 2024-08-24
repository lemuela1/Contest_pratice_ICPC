#include<iostream>

using namespace std;
void get_name(char (&name)[100]){
        cout << "Please enter the user name(in lowercase): ";
    for(int i = 0; i < 100 && name[i-1] != '\n'; i++){
        cin.get(name[i]);
        if(!('a' <= name[i] && name[i] <= 'z') && name[i] != '\n'){
            cout << "invalid input, please try again." << endl;
            cin.clear();
            for(int i = 0; i < 100; i++){name[i]='\u0000';}
            get_name(name);
        }
    }
}

int main(){
    char name[100];
    get_name(name);
    bool alpha[26];
    for(int i = 0; i < 100; i++){
        if(name[i] == '\u0000'){break;}
        alpha[(name[i] - 'a')] = true;
    }

    int count = 0;
    for(int i = 0; i < 26; i++){
        if(alpha[i]){count++;}
    }

    cout << (count%2 ? "IGNORE HIM!" : "CHAT WITH HER") << endl;
}