#include <iostream>

using namespace std;

int main(){
    freopen("inverse.in", "r", stdin);
    freopen("inverse.out", "w", stdout);
    int n;
    cin >> n;
    if(n == 1){
        int x;
        cin >> x;
        cout << 1 << endl;
        return 0;
    }
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i+1 == arr[j]){
                cout << j+1 << " ";
                break;
            }
        }
    }

    return 0;
}