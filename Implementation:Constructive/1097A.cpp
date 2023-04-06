// https://codeforces.com/problemset/problem/1097/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    vector<string> b(5);
    for(int i=0; i<5; i+=1){
        cin>>b[i];
    }
    int c=0;
    for(int i=0; i<5; i+=1){
        if(b[i].at(0)==a.at(0) or b[i].at(1)==a.at(1)){
            c+=1;
        }
    }
    if(c){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
