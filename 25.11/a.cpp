// lab 10, K
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool IsPrime(int x){
    x = abs(x);
    
    bool test = true;
    for(int i=2; i*i<=x; i++){
        if(x%i==0){
            test = false;
            break;
        }else{
            test = true;
        }
        
    }
    return test;
}

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<=n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    cnt = count_if(v.begin(), v.end(), IsPrime);
    cout << cnt;

}