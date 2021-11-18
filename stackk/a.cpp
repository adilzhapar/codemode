// скобочная последовательность
#include <iostream>
#include <stack>

using namespace std;

bool Brackets(string s){
    stack<char> ss;
    // "((())())"
    for(int i=0; i<s.size(); i++){
        if(s[i] == '('){
            ss.push(s[i]);
        }else{
            if(ss.empty()){
                return false;
            }else{
                ss.pop();
            }
        }
    }
    return ss.empty();
    // if(ss.empty()==true){
    //     return true;
    // }else return false;
}

bool cntBrackets(string s){
    int cnt=0;
    for(int i=0; i<s.size(); i++){
        if(cnt < 0) return false;
        if(s[i] == '('){
            cnt++;
        }else{
            cnt--;
        }
    }
    return (cnt == 0);
}

int main(){
    string s;
    cin >> s;
    cntBrackets(s) ? cout << "YES" : cout << "NO";
    // condition ? true : false
    return 0;
}