// https://codeforces.com/problemset/problem/1613/C

#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n, h;
        cin>>n>>h;
        vector<int> a(n);
        for(int i=0; i<n; i+=1){
            cin>>a[i];
        }
        int low=1, high=h, cnt=h;
        while(low<=high){
            int mid=low+(high-low)/2;
            int damage=0;
            for(int i=0; i<n; i+=1){
                int tmp=mid;
                if(i<n-1){
                    int diff=a[i+1]-a[i];
                    if(diff<mid){
                        tmp=diff;
                    }
                }
                damage+=tmp;
            }
            if(damage>=h){
                cnt=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        cout<<cnt<<endl;
    }
}
