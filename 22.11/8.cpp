#include <iostream>
using namespace std;

bool isPossible(int init, int dest){
    if (dest == init) return true;
    if (dest < init) return false;
    return (isPossible(init, dest - 3) || isPossible(init, dest - 5));
}

int main(){
    
    int dest, init = 1;
    cin >> dest;

    cout << (isPossible(init, dest) ? "YES" : "NO");

    return 0;
}