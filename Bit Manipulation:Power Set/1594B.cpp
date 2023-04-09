// https://codeforces.com/problemset/problem/1594/B

#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
int32_t main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n, k, cnt=0, tmp=1;
        cin>>n>>k;
        while(k>0){
            if((k%2)==1){
                cnt=(cnt+tmp)%mod;
            }
            tmp=(tmp*n)%mod;
            k=k/2;
        }
        cout<<cnt<<endl;
    }
}
