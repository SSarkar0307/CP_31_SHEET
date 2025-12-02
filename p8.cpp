// JUST CHECK IF THE K EXISTS IN THE ARRAY, WE FORM SINGLE ELEMENT SUBARRAY SO ANS WOULD BE ALWAYS TRUE FOR EXIST

#include <bits/stdc++.h>
using namespace std;

void solve(int n , int k, vector<int>& arr){
    
    for(int i =0; i<n; i++){
        if(arr[i]==k){
            cout<<"YES";
            return;
        }
    }

    cout<<   "NO";
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int t;
    cin>>t;
    
    while(t--){
        int n, k;
        cin>>n>>k;
        
        vector<int> arr(n);
        for(int i=0; i<n; i++) cin>> arr[i];
        
        
        solve(n, k, arr);
        cout<<endl;
        
    }

    return 0;
}

