#include <bits/stdc++.h>

using namespace std;
int cnt[26]; // крутая строчка

int main(){
    
    string s;
    cin >> s;

    /*int cnt[26];
    for(int i=0; i<26; i++){
        cnt[i] = 0;
    }*/ // не крутой вариант крутой строчки

    
    for (int i = 0; i < s.size(); ++i){
        if (cnt[s[i] - 97] > 0){
            cout << s[i];
        }
        cnt[s[i] - 97]++;
    }

    cout << endl;
    for (auto i : cnt) cout << i << " ";

    return 0;
}