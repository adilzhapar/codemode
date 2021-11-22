#include <iostream>
#include <algorithm>
using namespace std;

void fun1(int &a){
    a *= a;
}

bool fun2(int &a){
    return a % 2 == 0;
}

int main(){

    int ar[5] = {1, 2, 3, 4, 5};
    // int cnt = count_if(ar, ar + 5, fun2);
    int cnt = 0;
    for (int i = 0; i < 5; ++i){
        if (fun2(ar[i])){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}