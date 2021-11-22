#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int ar[5];
    for (auto i : ar) printf("%d ", i);
    fill(ar, ar + 5, 20);
    for (auto i : ar) printf("%d ", i);

    return 0;
}