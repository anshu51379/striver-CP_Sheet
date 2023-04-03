// https://codeforces.com/problemset/problem/281/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    string input;
    cin>>input;
    for(int i=0; i<input.size(); i++){
        input[0]=toupper(input[0]);
    }
    cout<<input;
}
