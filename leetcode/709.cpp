#include <iostream>

using namespace std;

int main(){
    string s = "s = \"hello\"";
    size_t found = s.find('\"');
    s = s.substr(s.find('\"', found));
    cout << s;
    return 0;
}