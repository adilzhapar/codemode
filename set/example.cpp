#include <iostream>
#include <set>
using namespace std;

int main(){

    int n;
    cin >> n;
    string s;
    set <string> myset;
    for (int i = 0; i < n; ++i){
        cin >> s;
        myset.insert(s);
    }

    cout << "Set size is: " << myset.size() << endl;

    set <string> :: iterator it;
    for (it = myset.begin(); it != myset.end(); it++){
        cout << *it << ' ';
    }
    
    return 0;
}