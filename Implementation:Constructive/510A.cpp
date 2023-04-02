//https://codeforces.com/problemset/problem/510/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    for(int i=1; i<=n; i+=1){
        if(i%4==2){
            for(int i=1; i<m; i+=1){
                cout<<".";
            }cout<<"#";
        }else if(i%4==0){
            cout<<"#";
            for(int i=1; i<m; i+=1){
                cout<<".";
            }
        }else{
            for(int i=1; i<=m; i+=1){
                cout<<"#";
            }
        }
        cout<<endl;
    }
}
