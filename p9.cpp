//TOTAL SUM IS ALWAYS 0

#include <bits/stdc++.h>
using namespace std;

void solve(int n , vector<int>& arr){
    int sum=0;
    
    for(int i =0; i<n; i++){
        sum+= arr[i];
    }

    cout<<-sum;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        n--;
        
        vector<int> arr(n);
        for(int i=0; i<n; i++) cin>> arr[i];
        
        
        solve(n,arr);
        cout<<endl;
        
    }

    return 0;
}

