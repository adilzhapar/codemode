// convert to binary, check for palindrome
#include <iostream>

using namespace std;

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

    return 0;
}