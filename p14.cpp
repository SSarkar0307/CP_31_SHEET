// IF C IS EVEN IT DOESNT BENIFIT ANYONE, AS EQUAL DISTRIBUTION, IF C IS ODD, A GETS AN ADVANTAGE OF +1 BUTTONS DUE TO FIRST MOVE, NOW AFTER C DISTRIBUTION IF A HAS MORE MOVES A WINS OTHERWISE B

#include <bits/stdc++.h>
using namespace std;

void solve(int a, int b, int c){
    
    if(c%2 ==0){
        if(a > b) cout<<"First";
        else cout<<"Second";
    }
    
    else {
        if(a+1 >b) cout<<"First";
        else cout<<"Second";
    }

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int t;
    cin>>t;
    
    while(t--){
        int a, b, c;
        
        cin>>a>>b>>c;
        
        solve(a, b, c);
        cout<<endl;
        
    }

    return 0;
}
