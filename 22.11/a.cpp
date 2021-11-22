#include <bits/stdc++.h>

using namespace std;

int main(){
    map<string, vector<string> > m;
    map<string, vector<string> > :: iterator it;
    m["Italy"] = {"Rome", "Palermo", "Venezia"};
    m["Spain"] = {"Barcelona", "Madrid", "Valencia"};
    m["France"] = {"Paris", "Marsel", "Lille"};

    // vector<string> ==  (*it).second
    for(it = m.begin(); it != m.end(); it++){
        cout << (*it).first << endl;
        for(int i=0; i < (*it).second.size(); i++){
            cout << (*it).second[i] << " ";
        }
        cout << endl;
    }
    return 0;
}