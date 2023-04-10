// https://codeforces.com/contest/1602/problem/C

#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector<int> a(n), tmp(32), ans;
        for(int i=0; i<n; i+=1){
            cin>>a[i];
        }
        for(int j=0; j<32; j+=1){
            for(int i=0; i<n; i+=1){
                if((a[i])&(1<<j)){
                    tmp[j]+=1;
                }
            }
        }
        for(int i=1; i<n+1; i+=1){
            bool flag=true;
            for(int j=0; j<32; j+=1){
                if(tmp[j]%i!=0){
                    flag=false;
                    break;
                }
            }
            if(flag){
                ans.push_back(i);
            }
        }
        sort(ans.begin(), ans.end());
        for(int i=0; i<ans.size(); i+=1){
            cout<<ans[i]<<" ";
        }cout<<endl;
    }
}
