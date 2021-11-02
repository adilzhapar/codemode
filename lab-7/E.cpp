#include <iostream>
using namespace std;

bool isDegreeOfTwo(float a){
    if (a == 1) return true;
    if (a == 0) return false;
    return isDegreeOfTwo(a / 2);
}

int main(){

    int a;
    cin >> a;
    isDegreeOfTwo(a) ? cout << "Yes" : cout << "No";
    return 0;
}