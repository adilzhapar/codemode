#include <iostream>
using namespace std;

int cnt = 0;

bool isPossible(int init, int dest){
    if (dest == init) return true;
    if (dest < init) return false;
    cnt++;
    return (isPossible(init, dest - 3) || isPossible(init, dest - 5));
}

int main(){
    
    int dest, init = 1;
    cin >> dest;

    cout << (isPossible(init, dest) ? "YES" : "NO") << ' ' <<
        (isPossible(init, dest) ? cnt : -1);

    return 0;
}