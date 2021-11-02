#include <iostream>
#include <vector>


using namespace std;

int main(){
    vector<int> v;    
    vector<string> s;    
    vector<char> c;
    vector<vector<int> > vv;


    // vector<int> vs = {1, 5, 2, 8, 4, 9};
    // vector<int> vs(5, 0);
     
    
    
    int x;
    while(cin >> x){
        if(x == 0) break;
        else{
            v.push_back(x);
        }
    }


    for(auto i: v){
        cout << i << " ";
    }
    int n=5;
    vector<int> v2(n);
    for(int i=0; i<n; i++){
        cin >> v2[i];        
    }
    return 0;
}