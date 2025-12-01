// PRETTY EASY! JUST FIND THE MAX DIFFERENCE BETWEEN THE FUEL STATIONS, ALONG WITH THE START AND END, BUT JUST FOR THE LAST FUEL STATION -> END DISTANCE SHOULD BE 2 TIMES, AS IN THE SAME REFUEL THE CAR HAS TO REACH AND COME BACK TO THE LAST FUEL STATION

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& arr){
    int n=arr.size();
    int maxi=0;
    for(int i=0; i<n-1; i++){

        int d= arr[i+1] - arr[i];
        if(i==n-2) d*=2;
        maxi= max( maxi, d);
    }

    cout<<maxi<<endl;

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;

        vector<int> arr(n+2);
        n=n+2;
        arr[0]=0; arr[n-1]=x;
        for(int i=1; i<n-1; i++) cin>>arr[i];

        solve(arr);
    }

    return 0;
}