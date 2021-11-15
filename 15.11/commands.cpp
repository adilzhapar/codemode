#include <iostream>
#include <queue>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    queue <int> q;
    string s;
    while(n--){
        cin >> s;
        if (s == "push"){
            int k;
            cin >> k;
            q.push(k);
            cout << "OK";
        } else if (s == "pop"){
            cout << q.front();
            q.pop();
        } else if (s == "size"){
            cout << q.size();
        } else if (s == "front"){
            cout << q.front();
        }
        cout << endl;
    }

    return 0;
}