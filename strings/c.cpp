// изменить все буквы на заглавные

#include <iostream>
using namespace std;

int main(){
    string s, t="";
    cin >> s;
    for(int i=0; i<s.size(); i++){
        
        // t += char(int(s[i]) - 32);
        s[i] =  char(int(s[i]) - 32);
    }
    // char c = '+'
    for(int i=0; i<s.size(); i++){
        cout << s[i] << char(32);
    }
    return 0;
}