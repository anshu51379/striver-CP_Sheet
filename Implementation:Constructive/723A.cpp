//https://codeforces.com/problemset/problem/723/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3];
    for(int i=0; i<3; i+=1){
        cin>>arr[i];
    }
    sort(arr, arr+3);
    cout<<abs(arr[0]-arr[1])+abs(arr[1]-arr[2])<<endl;
}
