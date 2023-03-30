//https://codeforces.com/problemset/problem/1352/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int inp[6];
        int tmp1=0, tmp2=1;
        for(int i=0; i<=5; i+=1){
            inp[i]=n%10;
            n=n/10;
            if(inp[i]!=0){
                tmp1+=1;
            }
        }
        cout<<tmp1<<endl;
        for(int i=0; i<=5; i+=1){
            if(inp[i]!=0){
                cout<<inp[i]*tmp2<<" ";
            }
            tmp2=tmp2*10;
        }
        cout<<endl;
    }
}
