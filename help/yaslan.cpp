#include <iostream>
#include <algorithm>

using namespace std;

bool cheater(int a[], int n, int k, int i){
    if(i == n-2) return true;
    if(a[i] + k >= a[i+1]) return false;
    return cheater(a, n, k, i+1);
}

int main(){
    int n, k, i=0;
    bool res;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    cheater(a, n, k, i) ? cout << "no" : cout << "cheater"; // Не передал k
    return 0;
}