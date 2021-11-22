#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int ar[5] = {1, 2, 3, 6, 7};
    while(next_permutation(ar, ar + 5)){
        for (auto &i : ar){
            cout << i << ' ';
        }
        cout << '\n';
    }
    
    while(prev_permutation(ar, ar + 5)){
        for (auto &i : ar){
            cout << i << ' ';
        }
        cout << '\n';
    }

    return 0;
}