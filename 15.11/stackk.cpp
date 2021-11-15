#include <iostream>
#include <stack>
using namespace std;

int main(){
    
    stack <int> s;
    s.push(4);
    s.push(7);
    s.push(2);
    s.push(12);
    while(!s.empty()){
        cout << s.top() << ' ';
        s.pop();
    }

    return 0;
}