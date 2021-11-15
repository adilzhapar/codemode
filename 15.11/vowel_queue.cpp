#include <iostream>
#include <queue>
using namespace std;

// bool isVowel(char a){
//     switch (a){
//     case 'a':
//     case 'e':
//     case 'i':
//     case 'o':
//     case 'u':
//         return true;
//     default:
//         return false;
//     }
// }

bool isVowel(char a){
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'){
        return true;
    }
    return false;
}

int main(){
    
    string s;
    cin >> s;
    queue <char> q;
    for (int i = 0; i < s.size(); ++i){
        q.push(s[i]);
    }
    int cnt = 0;
    while(!isVowel(q.front())){
        cnt++;
        q.pop();
    }
    cout << cnt << ' ' << q.front();

    return 0;
}