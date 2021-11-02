// в промежутке m, n распечатать все числа содержащие цифру 5 (15, 25, 50, 55, 51, 501 и т.д)
#include <iostream>
using namespace std;

bool cFive(int a){ // функция проверяет, есть ли 5 в числе
    while (a != 0){
        if (a % 10 == 5){
            return true;
        }
        a /= 10;
    }
    return false;
}

int main(){
    
    int m, n;
    cin >> m >> n;
    for (int i = m; i <= n; ++i){
        if (cFive(i)) cout << i << " ";
    }

    return 0;
}