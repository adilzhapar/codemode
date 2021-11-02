// find sum of three elements;
#include <iostream>

using namespace std;

int summa(char x, int Merei, int Ernat, int Alisher){

    // int answer = Merei + Ernat + Alisher;
    // return answer;

    return Merei + Ernat + Alisher;
}

int main(){
    int x, y, z;
    char a = '.';

    cin >> x >> y >> z;
    // cout << x + y + z << endl;
    cout << summa(a, z, x, y) << endl;
    
    cout << summa('.', 3, 9, 1);

    return 0;
}

