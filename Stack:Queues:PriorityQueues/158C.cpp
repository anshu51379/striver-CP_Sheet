// https://codeforces.com/contest/158/problem/C

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    stack<string> fin;
    for(size_t i=0; i<n; i+=1){
        string inp;
        cin>>inp;
        if(inp[0]=='p'){
            stack<string> tmp;
            while(!fin.empty()){
                tmp.push(fin.top());
                fin.pop();
            }
            string ans="/";
            while(!tmp.empty()){
                fin.push(tmp.top());
                ans+=tmp.top()+'/';
                tmp.pop();
            }
            cout<<ans<<endl;
        }else if(inp[0]=='c'){
            string inp2;
            cin>>inp2;
            bool flag=false;
            if(inp2[0]=='/'){
                flag=true;
                while(!fin.empty()){
                    fin.pop();
                }
            }
            vector<string> prt;
            string dlmtr="/";
            size_t curr;
            int nxt=-1;
            do{
                curr=nxt+1;
                nxt=inp2.find_first_of(dlmtr, curr);
                prt.push_back(inp2.substr(curr, nxt-curr));
            }
            while(nxt!=string::npos);
            for(size_t i=0; i<prt.size(); i+=1){
                if(prt[i]==".."){
                    fin.pop();
                }else if(prt[i]==""){
                    continue;
                }else{
                    fin.push(prt[i]);
                }
            }
        }
    }
}
