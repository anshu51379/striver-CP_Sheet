// https://codeforces.com/problemset/problem/702/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i+=1){
        cin>>a[i];
    }
    int count=1, ans=1;
    for(int i=0; i<n-1; i+=1){
        if(a[i]<a[i+1]){
            count+=1;
        }else{
            count=1;
        }
        if(count>ans){
            ans=count;
        }
    }
    cout<<ans<<endl;
}
