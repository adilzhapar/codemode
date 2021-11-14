#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    string t;
    t = s;
    sort(t.begin(), t.end());
    // cout << s << endl << t << endl;
    for(int i=0; i<t.size(); i++){
        if(int(t[i])-65 < i){
            cout << "NO";
            return 0;
        }
    }

    cout << "YES\n";
    for(int i=0; i<t.size(); i++){
        cout << s.find(t[i])+1 << " ";
        s[s.find(t[i])] = '0';
    }
    return 0;
    
}