#include <iostream>
#include <algorithm> // sort

using namespace std;

int count_eq(int x, int arr[], int cnt, int n){ // функция int вернет int
    for(int i=0; i<n; i++){
        if(x == arr[i]){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;
    int fir[n];
    int sec[n];
    for(int i=0; i<n; i++){
        cin >> fir[i];
    }
    for(int i=0; i<n; i++){
        cin >> sec[i];
    }
    sort(fir, fir+n);
    int cnt=0;
    for(int i=0; i<n; i++){
        if(fir[i] != fir[i-1]){ // если число не повторяется, то есть уникальное, то мы ищем сколько раз встретится во втором массиве
            cnt = count_eq(fir[i], sec, cnt, n);
        }
    }
    cout << cnt;

    
    return 0;
}