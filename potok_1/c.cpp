// читать числа, пока число делится на 3. вывести кол-во чисел поделенных на 3
#include <iostream>
using namespace std;

bool divThree(int a){
    return a % 3 == 0;
}

int main(){
    
    int a, cnt = 0;
    while(cin >> a){
        if (!divThree(a)){
            cout << cnt;
            return 0;
        }
        cnt++;
    }

    return 0;
}