#include <iostream>
using namespace std;

string s, q;
string toBinary(int n){
    if (n == 0) return s;
    s = char(n % 2 + 48) + s;
    return toBinary(n / 2);
    // s += n % 2 + 48;
    // % 2
    // n / 2
    // 12 = 1100
    // 0011
    // 1100 true output
}

string toBinary2(int n){
    while (n != 0){
        q = char(n % 2 + 48) + q;
        n /= 2;
    }
    return q;
}

int main(){
    int n;
    cin >> n;
    // string t = toBinary(n);
    // reverse(t.begin(), t.end());
    // cout << t;
    if (n == 0){
        cout << 0;
        return 0;
    }
    cout << toBinary(n) << '\n';
    cout << toBinary2(n);
    return 0;
}