#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair <string, int> &Ernat_p1, pair <string, int> &p2){
    // if (Ernat_p1.second < p2.second) return true;
    // else return false;
    return Ernat_p1.second < p2.second;
}

int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    map <string, int> m1, m2;
    while(n--){
        string vesch;
        int cost;
        cin >> vesch >> cost;
        // m.insert(make_pair(vesch, cost));
        m1[vesch] = cost;
    }
    int k;
    cin >> k;
    while(k--){
        string vesch;
        int quantity;
        cin >> vesch >> quantity;
        m2[vesch] += quantity * m1[vesch];
    }
    // vector <pair<string, int> > v(m2.begin(), m2.end());
    vector <pair<string, int> > v;
    map <string, int> :: iterator it;
    for (it = m2.begin(); it != m2.end(); it++){
        // v.push_back(make_pair((*it).first, (*it).second));
        v.push_back(*it);
    }
    sort(v.begin(), v.end(), comp);
    for (auto i : v) cout << i.first << ' ' << i.second << endl;

    return 0;
}