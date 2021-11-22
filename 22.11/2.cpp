#include <iostream>
#include <algorithm>
using namespace std;

void fun1(int &a){
    a *= a;
}

int main(){

    int ar[5] = {1, 2, 3, 4, 5};
    for_each(ar, ar + 5, fun1);
    for (int i = 0; i < 5; ++i){
        ar[i] *= ar[i];
    }
    for(auto &i : ar){
        cout << i << ' ';
    }

    return 0;
}