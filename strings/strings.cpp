#include <string>
#include <iostream>

using namespace std;

int main(){
    string s;
    string t;
    /*
    s = " world";
    cout << "Hello" << s;

    cin >> t;
    for(size_t i=0; i<t.size(); i++){ // t.size() == t.length()
        cout << t[i] << endl;
    }*/

    s = "Yaslan";
    cin >> t;

    if(s == t) cout << "Yaslan";
    else cout << "Not Yaslan";
    

    return 0;
}