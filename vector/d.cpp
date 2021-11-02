#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    vector <int> v = {1, 2, 3, 51, 22, 4};
    vector <int> :: iterator it;

    for (it = v.begin(); it != v.end(); ++it){
        cout << *it << ' ';
    }
    cout << '\n';

    
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for (auto i : v){
        cout << i << ' ';
    }
    cout << endl;


    sort(v.rbegin(), v.rend());
    reverse(v.begin(), v.end());
    for (auto i : v){
        cout << i << ' ';
    }

    // map <pair <int, int>, pair <int, int> > :: iterator it;

    // for (auto i : v){
    //     cout << i << ' ';
    // }

    return 0;
}