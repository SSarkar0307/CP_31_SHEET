// SORTING CAN BE DONE WITH JUST SWAPPING, SO IF FIRST ELEMENT IS AT THE RIGHT POSITION AS IT SHOULD BE AFTER SORTING THEN SORTING CAN BE DONE EVEN STARTING SWAPS FROM 2ND ELEMENT 

#include <bits/stdc++.h>
using namespace std;

void solve(int n, vector<int>& arr){
    int a= arr[0];
    sort(arr.begin(), arr.end());
    

    if(a== arr[0]) cout<< "YES";
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
        
        vector<int> arr(n);
        for(int i=0; i<n; i++) cin>>arr[i];
        
        solve(n, arr);
        cout<<endl;
        
    }

    return 0;
}