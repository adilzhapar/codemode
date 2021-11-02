#include <iostream>

using namespace std;

void void_print_num(int n){
    cout << n << endl;

}

int int_print_num(int n, int a, string s){
    s += "adil";
    a *= 5;
    n /= 2;
    return n;
}

int main(){
    int n;
    cin >> n;


    void_print_num(n);
    
    int x = int_print_num(n, 3, "");
    cout << x;

    // cout << int_print_num(n);

    return 0;
}