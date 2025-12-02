// FIND THE MINIMUM ABSOLUTE ELEMENT

#include <bits/stdc++.h>
using namespace std;

void solve(int n, vector<int> &arr){
    
    int mini= *min_element(arr.begin(), arr.end());
    
    cout<< abs(mini)  ;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int t=1;
    // cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        vector<int>arr (n);
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            arr[i]=abs(x);
        };
        solve(n, arr);
        cout<<endl;
        
        
    }

    return 0;
}