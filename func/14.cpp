#include <iostream>

using namespace std;

int isYaslan(int first_number, int second_number){
    if(first_number > second_number){
        return first_number;
    }
    return second_number;
}


void print_max(int f, int s){
    if(f > s){
        cout << f;
    }else{
        cout << s;
    }
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << isYaslan(a, b)<< endl;
    print_max(a, b);
    return 0;
}