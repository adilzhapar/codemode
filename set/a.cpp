#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 8, 6};
    set<int> s;
    int n = sizeof(arr) / sizeof(arr[0]);

    
    for(int i=0; i<n; i++){
        s.insert(arr[i]);
        cout << arr[i] << " ";
    }
    cout << endl;
    set<int> :: iterator it;
    int i = 0;
    for(it = s.begin(); it != s.end(); it++){
        // cout << i << ": " << *it <<  endl;
        printf("%i: %d\n", i, *it);
        i++;
    }
    return 0;
}