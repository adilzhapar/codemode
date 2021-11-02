#include <iostream>
#include "functions.h"

using namespace std;

void coutsmth(){
    cout << "Hello!\n";
    // cout << "Hello!" << endl;
    return;
}

int main(){
    int a;
    cin >> a;
    // // int i = 0;   1st method
    // // while(i < a){
    // //     i++;
    // // }

    // // for (int i = 0; i < a; ++i){ 2nd method
    // //     als
    // // }

    while(a--){
        int x;
        cin >> x;
        // if (isPrime(x)){
        //     cout << "YES\n";
        // } else cout << "NO\n";
        cout << (isPrime(x) ? "YES\n" : "NO\n");
    }

    // coutsmth();
    // coutsmth();
    // coutsmth();
    // coutsmth();



    return 0;
}

