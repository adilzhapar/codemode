#include <iostream>
#include <vector>

using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 5, 7};
    vector<int> v;

    int brr[5];
    for(int i=0; i<5; i++){
        brr[i] = arr[i];
        // v[i] = arr[i]  wrong
        v.push_back(arr[i]);
    }


    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
        cout << v.at(i) << endl;
    }
    return 0;
}