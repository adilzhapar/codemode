// если заглавная -> поменять на маленькую
// если маленькая -> сделать Бас арип

// изменить все буквы на заглавные

#include <iostream>
using namespace std;

int main(){
    string s, t="";
    cin >> s;
    for(size_t i=0; i<s.size(); i++){
        if(int(s[i]) >= 97 && int(s[i]) <= 122){
            s[i] = char(int(s[i] - 32));
        }else{
            s[i] = char(int(s[i] + 32));
        }
    }
    cout << s;
    return 0;
}