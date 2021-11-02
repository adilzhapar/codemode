#include <iostream>
using namespace std;

int n;
int a[10000];
int b[10000];
int cnt1[100];
int cnt2[100];
int count = 0;


void read(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
}

void cnt(){
    for(int j=0;j<n;j++){
        cnt1[a[j]-1]++;
    }
    
    for(int j=0;j<n;j++){
        cnt2[b[j]-1]++;
    }
    
}


int res(){
    for(int i=0;i<100;i++){
        if(cnt1[i]==cnt2[i]){
            count += cnt1[i];
        }else if(cnt1[i]!=0 and cnt2[i]!=0){
            if(cnt1[i]<cnt2[i]){
                count += cnt1[i];
            }else{
                count += cnt2[i];
            }
        }
    }
    return count;
}



int main(){
    init();
    read();    
    cnt();
    
    res();
    
    cout << count;

    return 0;
}