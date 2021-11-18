#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Mysort(int &a, int &b){
    return a > b;
}

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), Mysort);
    for(auto i: v){
        cout << i << " ";
    }
    return 0;
}