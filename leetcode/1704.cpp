#include <iostream>
#include <algorithm>

using namespace std;

bool isvowel(char c){
        switch (c) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            return true;
            default:
            return false;
        }
}
bool halvesAreAlike(string s) {
    int cnt_a = 0;
    int cnt_b = 0;
    for(size_t i=0; i<s.size(); i++){
        s[i] = tolower(s[i]);
    }
    for(int i=0; i<s.size() / 2; i++){
        if(isvowel(s[i])) cnt_a++;
    }
    for(int i = s.size()/2; i < s.size(); i++){
        if(isvowel(s[i])) cnt_b++;
    }
    return cnt_a == cnt_b;
}

int main(){
    string s;
    cin >> s;
    cout << halvesAreAlike(s) ? "Yes" : "No";
    return 0;
}