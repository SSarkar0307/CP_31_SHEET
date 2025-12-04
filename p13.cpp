// IF A > B THEN A WILL BE NEVER BE A DIVISOR OF B, SO WE USE THIS PRINCIPLE, TO SORT THE MAIN ARR, AND THEN JUST PUT 1 ELEMENT(OR MORE IF THERE IS DUPLICATES OF FIRST ELEMENT) IN "B" AND REST ALL IN "C" AS ALL OF THEM WILL BE GREATER

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& arr, int n){
    
    vector<int> b;
    vector<int> c;
    
    sort(arr.begin(), arr.end());
    b.push_back(arr[0]);
    
    for(int i=1; i<n; i++){
        if(arr[i]!= arr[i-1]){
            for(int j=i; j<n; j++) c.push_back(arr[j]);
            i=n+1;
        }
        else b.push_back(arr[i]);
    }
    
    if(c.size() ==0){
        cout<<-1;
        return;
    }
    
    cout<<b.size()<<" "<<c.size()<<endl;
    
    
    
    for(int i=0; i<b.size(); i++) cout<<b[i]<<" ";
    cout<<endl;
    for(int i=0; i<c.size(); i++) cout<<c[i]<<" ";

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

        solve(arr, n);
        cout<<endl;
        
    }

    return 0;
}