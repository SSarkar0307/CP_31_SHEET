// SIMPLE OBSERVATION PROBLEM
// FOR K=1 (NO REVERSE) ONLY POSSIBLE IF ALREADY SORTED
// FOR K>=2 ALWAYS POSSIBLE, BECAUSE SORTING ALGO LIKE BUBBLE SORT, INSERTION SORT, WORKS ON THE SWAP OPERATION AND SWAP --> (REVERSE A 2 SIZED SUBARRAY) 

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& arr, int k){
    string s= k>=2 ? "YES" : "NO";
    if(s=="NO"){
        vector<int> c= arr;
        sort(c.begin(), c.end());
        if(c==arr) s="YES";
        
    }
    cout<<s<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;

        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        solve(arr, k);
        
    }
}
