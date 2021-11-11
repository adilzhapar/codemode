#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int vowels(string s){
    int cnt = 0;
    for (int i = 0; i < s.size(); ++i){
        s[i] = tolower(s[i]);
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            cnt++;
        }
    }
    return cnt;
}

bool comparator(pair<string, int> &p1, pair<string, int> &p2){
    if (p1.second == p2.second){
        return p1.first < p2.first;
    }
    return p1.second > p2.second;
}

int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    map <string, int> m;

    while(n--){
        string name;
        cin >> name;
        m[name] = vowels(name);
    }
    vector <pair <string, int> > v(m.begin(), m.end());
    sort(v.begin(), v.end(), comparator);

    for (auto i : v){
        cout << i.first << ' ' << i.second << endl;
    }

    return 0;
}
// aeiou
// 5
// Aruzhan Darina Alisher Yaslan Mortiii
// 3 3 3 2 4

// output:
// Mortiii
// Alisher
// Aruzhan
// Darina
// Yaslan