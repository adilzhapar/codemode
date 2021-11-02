#include <iostream>
using namespace std;

const int one = 1;

bool deriveN(int begin, int a){
    if (begin == a) return true;
    if (begin > a) return false;
    return deriveN(begin + 3, a);  
    return deriveN(begin + 5, a);
}

int main(){
    
    int a;
    cin >> a;
    deriveN(one, a) ? cout << "YES" : cout << "NO";

    return 0;
}