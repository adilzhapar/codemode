#include <iostream>

using namespace std;

int main(){
    int n, z;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cin >> z;
    if(z > 0){
        for(int i=n-z; i<n; i++){
            cout << arr[i] << " ";
        }
        for(int i=0; i<n-z; i++){
            cout << arr[i] << " ";
        }
    }else if(z < 0){
        z = abs(z);
        for(int i  = z; i < n; i++){
            cout << arr[i] << " ";
        }
        for(int i = 0; i<z; i++){
            cout << arr[i] << " ";
        }
    }else{
        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
        }
    } 



    return 0;
}