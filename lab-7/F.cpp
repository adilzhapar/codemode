#include <iostream>
using namespace std;
int cnt;

int evens(string s, int begin){
    if (begin == s.size()) return cnt;
    if ((s[begin] - 48) % 2 == 0) cnt++;
    return evens(s, begin + 1);
}

int main(){
    
    string s;
    cin >> s;
    cout << evens(s, 0);

    return 0;
}