#include <iostream>
using namespace std;

char symb(int n){
    char arr[36];
    for(int i=0;i<10;i++){
        arr[i]=char(i+48);
    }
    for(int i=10;i<36;i++){
        arr[i]=char(i+55);
    }
    return arr[n];
}

void Kinary(int n, int k){
    if(n<k){
        cout << symb(n);
        return;
    }
    Kinary(n/k, k);
    cout << symb(n%k);
}


int main(){
    int n, k;
    cin >> n >> k;
    Kinary(n, k);
    return 0;
}