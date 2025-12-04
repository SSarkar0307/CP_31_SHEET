// JUST PARTITION, IF THERE ARE ODD NO OF ODD ELEMENTS THEN NOT POSSIBLE TO MAKE THEM EVEN, BUT IF WE HAVE EVEN NO OF ODD ELEMENTS THOSE CAN BE SUMMED TO MAKE EVEN, SO EVERYTHING WILL THEN BE EVEN,  NO NEED TO HANDLE THE EVEN CASES EXPLICITLY

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& arr, int n){
    
    int odd=0;
    for(auto x: arr){
        if(x&1) odd++;
    }
    
    if(odd&1){
        cout<<"NO";  
    }
    else{
        cout<<"YES";
    }
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