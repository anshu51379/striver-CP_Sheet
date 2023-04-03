// https://codeforces.com/problemset/problem/1368/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int a, b, lim;
        cin>>a>>b>>lim;
        int sum=0, cnt=0;
        while(sum<=lim){
            if(a<=b){
                a+=b;
                sum=a;
                cnt+=1;
            }else{
                b+=a;
                sum=b;
                cnt+=1;
            }
        }
        cout<<cnt<<endl;
    }
}
