// https://codeforces.com/problemset/problem/144/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    cin>>n;
    int max=0, min=INT_MAX, iMax=0, iMin=0;
    for(int i=1; i<=n; i+=1){
        cin>>x;
        if(x>max){
            iMax=i;
            max=x;
        }
        if(x<=min){
            iMin=i;
            min=x;
        }
    }
    if(iMax>iMin){
        cout<<(iMax-1)+(n-iMin)-1;
    }else{
        cout<<(iMax-1)+(n-iMin);
    }
}
