#include <iostream>
using namespace std;

int main(){
    int n;
    float b;
    bool test = true;
    string s = "";
    string t = "Aselya";
    n = 123;
    // cout << s+t;
    // s.size() / s.length();
    // cout << t.size();
    /*
    for(int i=0; i<s.size(); i++){
        cout << s[i] << endl;
    }*/
    /*
    if(s == t){
        cout << "yes";
    }else cout << "no";*/

    // ASCII:
    for(int i=65; i < 70; i++){
        s += char(i);
    }
    cout << s << endl;
    for(int i=0; i<s.size(); i++){
        cout << int(s[i]) << " ";
    }
    return 0;

}