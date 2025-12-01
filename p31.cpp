//ONLY POSSIBLE IF THERE IS ATLEAST 2 ELEMENTS BETWEEN PREFIX'S LAST ELEMENT(POSITION A) AND SUFFIXE'S FIRST ELEMENT(POSITION N-B+1), SO JUST SWAP THE POS+1 WITH POSB-1 AND ITS A YES PERMUTATION, OTHERWISE NOT POSSIBLE TO MAINTAIN STRICTLY A LCP AND B LCS

#include <bits/stdc++.h>
using namespace std;

void solve(int n, int a, int b){
    if(n==a && a==b){
        cout<<"YES";
        return;
    }
    int posB= n+1-b;
    
    if(posB- a >2 ) cout<<"YES";
    else cout<<"NO";
    // cout<<   ;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int t;
    cin>>t;
    
    while(t--){
        int n, a, b;
        cin>>n>>a>>b;
        
        solve(n, a, b);
        cout<<endl;
        
        
    }

    return 0;
}