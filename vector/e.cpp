#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int> v){
    for(auto i: v){
        cout << i << " ";
    }
}

int main(){
    vector<int> v = {1, 2, 3, 8, 7, 6};
    print_vector(v);
    return 0;
}