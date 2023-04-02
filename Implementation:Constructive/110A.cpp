// https://codeforces.com/problemset/problem/110/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0;
    string input; cin>>input;
    for(int i=0;i<input.size();i++){
        if(input[i]=='4'){
            count++;
        }
        else if (input[i]=='7'){
            count++;
        }
    }
    if(count==4||count==7){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
