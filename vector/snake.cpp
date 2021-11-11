#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<vector<int> > vv;
    vector <int> temp;
    int cnt = n * n;
    for (int i = 0; i < n; ++i){
        if (i % 2 == 0){
            for (int j = 0; j < n; ++j){
                temp.push_back(cnt--);
            }
        } else{
            for (int j = 0; j < n; j++){
                temp.insert(temp.begin(), cnt--);
            }
        }
        vv.push_back(temp);
        temp.clear();
    }
    /*vector <vector <int> > :: iterator it1;
    vector <int> :: iterator it2;
    for (it1 = vv.begin(); it1 != vv.end(); it1++){
        for (it2 = (*it1).begin(); it2 != (*it1).end(); it2++){
            cout << *it2 << " ";
        }
        cout << '\n';
    }*/
    // for (auto i : vv){
    //     for (auto j : i){
    //         cout << j << ' ';
    //     }
    //     cout << endl;
    // }
    for(int i = 0; i < vv.size(); i++){
        for(int j = 0; j < vv[i].size(); j++){
            cout << vv[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}