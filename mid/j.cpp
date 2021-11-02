#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    string s;
    cin >> s;
    int n, m;
    cin >> n >> m;
    char arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            arr[i][j] = 'X';
        }
    }
    arr[0][0] = '*';

    int x = 0, y = 0;
    for(size_t i=0; i<s.size(); i++){
        if(s[i] == 'D'){
            x++;
            arr[x][y] = '*';
        }
        if(s[i] == 'U'){
            x--;
            arr[x][y] = '*';
        }
        if(s[i] == 'R'){
            y++;
            arr[x][y] = '*';
        }
        if(s[i] == 'L'){
            y--;
            arr[x][y] = '*';
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}