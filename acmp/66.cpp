#include <iostream>

using namespace std;

int main(){
    string s = "qwertyuiopasdfghjklzxcvbnm";
    char c;
    cin >> c;
    if(c == 'm'){
        cout << 'q';
    }else{
        size_t f = s.find(c);
        cout << s[f+1];
    }

    return 0;
}