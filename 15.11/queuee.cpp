#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue<string> q;
    // q.back();
    // q.empty;
    // q.front;
    // q.pop;
    // q.push;
    // q.size;
    q.push("Alisher");
    q.push("Morti");
    q.push("Aruzhan");
    while(!q.empty()){
        cout << q.size() << " " << q.front() << endl;
        q.pop();
    }
    
    return 0;
}