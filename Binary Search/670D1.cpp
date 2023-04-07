// https://codeforces.com/contest/670/problem/D1

#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n, k;
    cin>>n>>k;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i+=1){
        cin>>a[i];
    }
    for(int i=0; i<n; i+=1){
        cin>>b[i];
    }
    int low=0, high=k+2000;
    while(low<=high){
        int mid=low+(high-low)/2;
        int tmp=0, cnt=0;
        for(int i=0; i<n; i+=1){
            cnt+=max(a[i]*mid-b[i],tmp);
        }
        if(cnt<=k){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    cout<<high<<endl;
}
