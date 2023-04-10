// https://codeforces.com/problemset/problem/1097/B

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i+=1){
        cin>>a[i];
    }
    bool flg=false;
    for(int i=0; i<=((1<<n)-1); i+=1){
        int cnt=0;
        for(int j=0; j<n; j+=1){
            if(i&(1<<j)){
                cnt+=a[j];
                cnt%=360;
            }else{
                cnt-=a[j];
                cnt%=360;
            }
        }
        if(!cnt%360){
            flg=true;
        }
    }
    if(flg){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
