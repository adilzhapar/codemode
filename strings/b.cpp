// s = "ahbvnjh374r94rhh5h78cj439v"
// нужно убрать буквы

#include <iostream>
using namespace std;

int main(){
    string s = "a1d3i5l7 7t54op";
    // cin >> s;
    string t = "";
    // t += "a" ==> t = "a"
    for(size_t i=0; i<s.size(); i++){
        if(!(int(s[i]) >= 48 && int(s[i] <= 57))){
            t += s[i];
        }
    }

    cout << t;

    return 0;
}