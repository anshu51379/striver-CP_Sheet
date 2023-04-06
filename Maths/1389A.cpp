// https://codeforces.com/problemset/problem/1389/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int l, r;
        cin>>l>>r;
        if(2*l<=r){
            cout<<l<<" "<<2*l<<endl;
        }else{
            cout<<-1<<" "<<-1<<endl;
        }
    }
}
