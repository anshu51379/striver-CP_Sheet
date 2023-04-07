// https://codeforces.com/contest/287/problem/B

#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n, k;
    cin>>n>>k;
    n-=1;
    int cnt=((k-1)*k)/2;
    if(cnt<n){
        cout<<-1<<endl;
    }else{
        int low=0, high=k;
        while(low<=high){
            int mid=low+(high-low)/2;
            if((cnt-(mid*(mid+1))/2)>=n){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        cout<<k-(high+1)<<endl;
    }
}
