// https://codeforces.com/problemset/problem/977/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=0, times=0;
    cin>>num>>times;
    for(int i=0;i<times;i++){
        int end=num%10;
        if(end==0){
            num = num/10;
        }
        else{
            num = num -1;
        }
    }
    cout<<num;
}
