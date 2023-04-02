// https://codeforces.com/problemset/problem/136/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int totalFriends; cin>>totalFriends;
    int arrangement[108], gifts;
    for(int i=1; i<=totalFriends; i++){
        cin>>gifts;
        arrangement[gifts]=i;
    }
    for(int i=1; i<=totalFriends; i++){
        cout<<arrangement[i]<<" ";
    }
}
