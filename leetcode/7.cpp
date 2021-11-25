#include <iostream>
#include <string>

using namespace std;

int reverse(int x) {
    bool is_minus = false;
    if(x < 0){
        is_minus = true;
        x  = abs(x);
    }
    string s = to_string(x);
    string t = "";
    for(int i=s.size()-1; i >= 0; i--){
        t += s[i];
    }
    x = stoi(t);
    if(x < 0) return 0;
    if(is_minus){
        return x *= -1;
    }else{
        return x;
    }
}

int main(){
    int x;
    cin >> x;
    cout << reverse(x);
    return 0;
}