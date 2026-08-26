#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, x;
        cin>>n>>x;
        vector<long long> a(n);
        vector<pair<long long, long long>> vrange(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
            vrange[i] = make_pair(a[i]-x, a[i]+x);
        }

        pair<long long, long long> curr = vrange[0];
        long long ans = 0;
        for(int i=0; i<n-1; i++){
            if(curr.first > vrange[i+1].second || curr.second < vrange[i+1].first){
                curr = vrange[i+1];
                ans++;
            }
            else{
                curr = make_pair(max(curr.first, vrange[i+1].first), min(curr.second, vrange[i+1].second));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}