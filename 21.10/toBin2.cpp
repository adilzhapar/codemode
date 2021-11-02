#include <iostream>

using namespace std;

int string_to_int(string s){
    int x = 0;
    int dec = 1;
    for(int i = s.size() -1; i >= 0; i--){
        x += int(s[i] - '0') * dec;
        dec *= 10; 
    }
    return x;
}

string toBin(int n){
    string t = "";
    while(n != 0){
        t = char(n % 2 + 48) + t;
        // t += char(n % 2 + 48);
        n /= 2;
    }
    return t;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int sum = 0;
    for(int i=0; i<n; i++){
        // cout << toBin(a[i]) << " ";
        string s = toBin(a[i]);
        sum += string_to_int(s);
    }
    cout << sum;
    return 0;
}