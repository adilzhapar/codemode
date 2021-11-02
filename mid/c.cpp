#include <bits/stdc++.h>

using namespace std;
int arr[1001];
int main(){
    int n;
    cin >> n;
    int x;
    for(int i=0; i<n; i++){
        cin >> x;
        arr[x]++;
    }

    int max = 0;
    for(int i=0; i<1001; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    
    for(int i = 1001; i >= 0; i--){
        if(arr[i] == max){
            cout << i << " ";
        }
    }
    // cout << max << "\n";
    // for(auto i: arr) cout << i << " ";

    return 0;
}