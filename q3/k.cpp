#include <bits/stdc++.h>
using namespace std;
int v[100];
int FibRec(int n, int k, int i){
    v[0] = 0;
    v[1] = 1;
    if (i == n) return v[n - 1];
    v[i] = (k * v[i - 1] + v[i - 2]) % 10;
    return FibRec(n, k, i + 1); 
}

int FibCyc(int n, int k){
    int v[n + 1];
    v[0] = 0;
    v[1] = 1;
    for (int i = 2; i <= n; ++i){
        v[i] = (k * v[i - 1] + v[i - 2]) % 10;
    }
    return v[n - 1];
}

int main(){
    int n, k;
    cin >> k >> n;
    cout << FibCyc(n, k) << '\n';
    cout << FibRec(n, k, 2);
    return 0;
}