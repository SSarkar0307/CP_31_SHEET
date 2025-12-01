// ALL CAN BE FILLED UP IF THERE IS ATLEAST ONE SUBARRAY WITH >2 _ _ _ EMPTY BOXES BY ACTION TYPE 2 REPEITIVELY
// OTHERWISE _ OR _ _ WILL ALWAYS NEED THE TOTAL NO OF EMPTY BOXES AS ACTION 2 CANT BE PERFORMED TO FILL OTHER BOXES IN BETWEEN THAT IS POSSIBLE FOR ONLY ATLEAST 3 LENGHT EMPTINESS

#include <bits/stdc++.h>
using namespace std;

void solve(string& s, int n){
    int one=0, two=0;
    int more=0;
    
    int count=0;
    
    for(int i=0; i<n; i++){
        // cout<<count<<" ";
        
        if(s[i]=='#') {
            if(count==2) two++;
            else if (count==1) one++;
            else if(count>2) more=1;
            count=0;
        }
        else count++;
        
    }
    if(count==2) two++;
    else if(count==1) one++;
    else if(count>2) more=1;
    
    if(more) {
        cout<<2; return;
    }
    
    
    
    cout<<2*two+ one;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // solve();
    
    
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        solve( s, n);
        cout<<endl;
        
    }

    return 0;
}