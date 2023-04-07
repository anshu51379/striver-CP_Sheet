// https://codeforces.com/problemset/problem/1296/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int sum=0;
        vector<int> a(n);
        int odd=0, even=0;
        for(int i=0; i<n; i+=1){
            cin>>a[i];
            sum+=a[i];
            if(a[i]&1){
                odd+=1;
            }else{
                even+=1;
            }
        }
        if(sum&1 or (odd and even)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
