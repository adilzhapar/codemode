#include <iostream>
#include <stack>
using namespace std;

int main(){
    // 5
    // 2 3 + 8 *
    freopen("input.txt", "r", stdin);
    stack <int> st;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i){
        char c;
        cin >> c;
        if (c == '+'){
            int second = st.top();
            st.pop();
            int first = st.top();
            st.pop();
            int temp = first + second;
            st.push(temp);
        } else if (c == '*'){
            int second = st.top();
            st.pop();
            int first = st.top();
            st.pop();
            int temp = first * second;
            st.push(temp);
        } else{
            st.push(int(c - 48));
        }
    }

    cout << st.top();

    return 0;
}