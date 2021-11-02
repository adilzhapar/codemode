#include <iostream>
 
using namespace std;
 
char code(int n){
    char arr[]={'0','1','2','3','4','5','6','7','8','9',
    'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P',
    'Q','R','S','T','U','V','W','X','Y','Z'};
    return arr[n];
}

void Kinary(int n, int k){
    if (n<k) {
        cout<<code(n);
        return;
    }
    Kinary(n/k,k);
    cout<<code(n%k);
}
 

int main(){
    int n, k;
    cin >> n >> k;
    
    Kinary(n,k);

    return 0;
}