// ONLY POSSIBLE WHEN EITHER 2 SIZED, OR IF MORE THAN 3 SIZED THEN, EITHER ALL ELEMENTS ARE SAME OR THERE EXISTS ONLY 2 ELEMENTS IN THE ARRAY, NOW FOR EVEN LENGTH THEIR FREQ WOULD BE SAME AND FOR ODD LENGTH THEIR FREQ WOULD DIFFER MAX BY 1

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& arr, int n ){

    if(n==2 || n==1){
        cout<<"YES";
        return;
    }
    
    map<int, int> mpp;
    for(int i=0; i<n; i++) {
        mpp[arr[i]]++;
    }
    
    if(mpp.size() >2){
        cout<<"NO"; return;
    }
    if(mpp.size()==1) {
        cout<<"YES"; return;
    }
    
    vector<int> a;
    for(auto p: mpp) a.push_back(p.second);
    
    if(abs(a[0] - a[1]) <=1) cout<<"YES";
    else cout<<"NO";

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

