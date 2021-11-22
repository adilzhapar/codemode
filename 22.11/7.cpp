#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int gen(){
    return rand();
}

int main(){
    srand(12);
    int n = 10;
    while(n--){
        cout << gen() << ' ';
    }

    // string s = "abcde";
    // string t = "deabc";
    // string s1 = s, t2 = t;
    // sort(s1); sort(t2);
    // if (s1 != t2){
    //     cout << "Impossible";
    //     return 0;
    // }
    // int cnt = 0;
    // while(s != t){
    //     cnt++;
    //     rotate(s.begin(), s.begin() + 1, s.end());
    //     cout << s << endl;
    // }
    // cout << cnt;
    return 0;
}