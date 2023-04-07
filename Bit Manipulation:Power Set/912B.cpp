// https://codeforces.com/problemset/problem/912/B

#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n, k;
    cin>>n>>k;
    if(k==1){
        cout<<n<<endl;
    }else{
        int x=1;
        while(x<n){
            x=(2*x)+1;
        }
        cout<<x<<endl;
    }
}
