// TOO MANY EDGE CASES
// IF ALREADY PRESENT THEN NO CHANGES
// MAIN IDEA IS WHEN A STRING IS DOUBLED ALL POSSIBLE ROTATIONS CAN BE FOUND AS SUBSTRINGS IN THE STRING

#include <bits/stdc++.h>
using namespace std;

void solve(int n, int m, string&x, string &s){
    // n-> x
    // m-> s
    
    // s substr of x
    
    if(x.find(s) != string::npos) {
        cout<<0; return;
    }
    
    

    if(n>=m){
        string check= x+x;
        if(check.find(s) != string::npos) cout<<1;
        else cout<<-1;
        return;
    }
    
    string check= x;
    int count=0;
    // cout<<check<<endl;
    while(check.size() <=m*3){
    // cout<<check<<endl;
        if(check.find(s) != string::npos) {
            cout<<count; return;
        }
        
        check = check+check;
        count++;
    }
    
    cout<<-1;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    
    
    int t;
    cin>>t;
    
    while(t--){
        
        int n, m;
        cin>>n>>m;
        
        string x, s;
        
        cin>>x>>s;
        
        solve(n, m, x, s);
        cout<<endl;
        
    }

    return 0;
}

