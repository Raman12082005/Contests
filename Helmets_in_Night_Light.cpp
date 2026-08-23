#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, p;
        cin>>n>>p;
        vector<pair<int, int>> arr(n+1);

        for(int i = 1; i<=n; i++) cin>>arr[i].second;
        for(int i = 1; i<=n; i++) cin>>arr[i].first;
        sort(arr.begin(), arr.end());
        int informed = 1;
        long long ans = p;

        for(auto it : arr){
            int cost = it.first;
            int capacity = it.second;

            if(informed >= n) break;

            if(cost >= p){
                ans += 1LL * (n - informed) * p;
                informed = n;
                break;
            }

            int canshare = min(capacity, n-informed);
            ans += 1LL * cost * canshare;
            informed += canshare;
        }
        cout<<ans<<endl;
    }
    return 0;
}