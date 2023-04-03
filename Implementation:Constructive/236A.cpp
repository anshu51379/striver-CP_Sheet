// https://codeforces.com/problemset/problem/236/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    string input;
    cin>>input;
    sort(input.begin(),input.end());
    int length=0;
    for(int i=1; i<input.size(); i++){
        if(input[i]!=input[i-1])
            length++;
    }
    if(length&1){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
}
