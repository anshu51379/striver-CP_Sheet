// https://codeforces.com/problemset/problem/1426/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        double n, x;
        cin>>n>>x;
        if(n<=2){
            cout<<1<<endl;
        }else{
            n-=2;
            cout<<1+ceil(n/x)<<endl;
        }
    }
}
