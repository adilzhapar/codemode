#include <iostream>
#include <algorithm>

using namespace std;

string reversePrefix(string word, char ch){
    size_t pos = word.find(ch);
    string s = word.substr(0, pos+1);
    string t = word.substr(pos+1);
    reverse(s.begin(), s.end());
    return s+t;
}

int main(){
    string s = "abcdefd";
    char c = 'd';
    cout << reversePrefix(s, c);
    return 0;
}