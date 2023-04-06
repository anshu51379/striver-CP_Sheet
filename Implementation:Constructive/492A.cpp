// https://codeforces.com/problemset/problem/492/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt=0;
    while(true){
        n=n-((cnt)*(cnt+1)/2);
        if(n>=0){
            cnt+=1;
        }else{
            break;
        }
    }
    cout<<cnt-1<<endl;
}
