// PURE IMPLEMENTATION PROBLEM, FIX THE RANGE FOR THE LEVEL AND GIVE THE POINTS ACCORDING TO THE RANGES

#include <bits/stdc++.h>
using namespace std;

void solve(vector<string> &s){
    int count=0;
    
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++)
        {
            if(s[i][j] == 'X'){
                
                int lvl= i+1;
                
                int x=i+1, y=j+1;
                
                int low, high;
                
                if(lvl > 5) low=10-lvl+1;
                else low= lvl;
                
                if(lvl> 5) high= lvl;
                else high=10-lvl+1;
                
                int inc=0;
                if( low<= y && y<=high) {
                    if(lvl>5) inc+= (10-lvl+1);
                    else inc+= lvl;
                }
                else {
                    if (y > 5) inc+= (10-y+1);
                    else inc+= y;
                }
                count+=inc;
            }
        }
    }

    cout<<  count ;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int t;
    cin>>t;
    
    while(t--){
        vector<string> s(10);
        for(int i=0; i<10; i++) cin>>s[i];

        
        
        solve(s);
        cout<<endl;
        
        
    }

    return 0;
}