#include <iostream>

using namespace std;

bool isPrime(int n){
    if(n < 2){
        return false;
    }else{
        for(int i=2; i*i<=n; i++){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }
}

int Fact(int n){
    int f = 1;
    for(int i=2; i<=n; i++){
        f *= i;
    }
    return f;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        if(isPrime(arr[i])){
            cout << Fact(arr[i]) << " ";
        }
    }
    
    return 0;
}