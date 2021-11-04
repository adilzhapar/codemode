#include <iostream>
#include <map>
using namespace std;

int main(){
    map <int, string> m; 

    m[13] = "trinadzat";
    m[751] = "zheti zhuz elu bir";
    m[23] = "twenty three";


    map <int, string> :: iterator it;
    for (it = m.begin(); it != m.end(); it++){
        cout << (*it).first << ": " << (*it).second << '\n';
    }
    
    return 0;
}