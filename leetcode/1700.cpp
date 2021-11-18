#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int countStudents(vector<int> students, vector<int> sandwiches) {
        queue<int> st;
        stack<int> sn;
        for(int i = sandwiches.size()-1; i>=0; --i){
            sn.push(sandwiches[i]);
        }
        for(int i=0; i<students.size(); i++){
            st.push(students[i]);
        }
        while(!sn.empty()){
            int student = st.front();
            st.pop();
            int san = sn.top();
            if(student == san){
                sn.pop();
            }else{
                st.push(student);
            }
        }
        return st.size();
    }

int main(){
    cout << countStudents({1, 1, 0, 0}, {0, 1, 0, 1});
    
    return 0;
}