#include <iostream>
using namespace std;

int degTwo(int x){
    if (x == 0) return 1;
    else return degTwo(x - 1) * 2;
}

int fact(int a){
    if (a == 0) return 1;
    return a * fact(a - 1);
}

int main(){
    
    int a;
    cin >> a;
    // cout << degTwo(a);
    cout << fact(a);
    return 0;
}