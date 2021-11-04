#include <iostream>
#include <set>

using namespace std;

int main(){
    freopen("input.txt","r", stdin);
    int n;
    cin >> n;
    string s;
    set<string> ss;
    while(n--){
        cin >> s;
        ss.insert(s);
    }
    cout << ss.size();    
    return 0;
}