#include <bits/stdc++.h>

bool isPrime(int x){
    for (int i = 2; i <= sqrt(x); ++i){
        if (x % i == 0){
            // b = false;
            return false;
        }
    }
    return true;
}

