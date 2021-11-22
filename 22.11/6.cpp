#include <iostream>
#include <algorithm>
using namespace std;

int beg = 0;

int gen(){
    int temp = beg;
    beg++;
    return temp;
}

int main(){

    int ar[5];
    generate(ar, ar + 5, gen);
    for (auto i : ar) cout << i << ' ';
    return 0;
}