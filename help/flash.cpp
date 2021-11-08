#include <iostream>

using namespace std;

string toSeven(string s){
    string t = "0000000";
    int x = 6;
    for(int i = s.size()-1; i>=0; i--){
        t[x] = s[i];
        x--;
    }
    return t;
}

string toBin(int n){
    string s="";

    while(n != 0){
        s = char(n%2+48) + s;
        n /= 2;
    }
    return toSeven(s);
}


int main(){
    int a, n, b, k;
    cin >> a >> n >> b >> k;
    // cout << toBin(a) << endl << toBin(b) << endl;
    (toBin(a)[n-1] == toBin(b)[k-1]) ? cout << "Thunderclap and Flash!" : cout << "Thunder Breathing... First form...";
    return 0;
}