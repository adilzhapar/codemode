// front, back, find
#include <iostream>
#include <string>

using namespace std;

int main(){
    string s = "hellosalamaleikum";
    s.front() = 'H';
    s.back() = '!';
    cout << s << endl;

    if(s.find("hi")==string::npos){ // если нету, если не нашли
        cout << "no hi" << endl;
        // cout << s.find("hi");
    }else{
        cout << s.find("hi");
    }

    string m;
    getline(cin, m); // прочитать всю строку с терминала
    cout << m << endl;
    cout << m.substr(0, 9);
    // cout << m.substr()
    

    return 0;
}

