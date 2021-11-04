#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n;
    cin >> n;
    set <int> ss, sss;

    int prev_size = 0;
    while(n--){
        int x;
        cin >> x;
        ss.insert(x);
        if (prev_size == ss.size()){
            sss.insert(x);
        }
        prev_size = ss.size();
    }
    set <int> :: reverse_iterator it;
    // for (it = sss.begin(); it != sss.end(); it++){
    //     cout << *it << ' ';
    // }
    for (it = sss.rbegin(); it != sss.rend(); it++){
        cout << *it << ' ';
    }

    return 0;
}