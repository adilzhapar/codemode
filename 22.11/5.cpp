#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int ar[5] = {2, 2, 3, 3, 5};
    unique(ar, ar + 5);
    for (auto i : ar) cout << i << ' ';

    return 0;
}