#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& arr, int n){
    
    vector<int> ans;
    
    for(int i=0; i<n; i++){

        
        ans.push_back(arr[i]);
        if(i<n-1 && arr[i] > arr[i+1]){
            ans.push_back(1);
            
        }
    }
    
    int m=ans.size();
    cout<<m<<endl;
    for(int i=0; i<m; i++) cout<<ans[i]<< " ";

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vector<int>arr(n);
        
        for(int i=0; i<n; i++) cin>>arr[i];
        
        solve(arr, n);
        cout<<endl;
        
    }

    return 0;
}