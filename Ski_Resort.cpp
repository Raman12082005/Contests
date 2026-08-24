#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k, q;
        cin>>n>>k>>q;

        vector<int> a(n);
        for(int i=0; i<n; i++) cin>>a[i];

        long long ans = 0;
        int count = 0;
        for(auto temp : a){
            if(temp > q){
                if(count >= k){
                    ans += 1LL * (count-k+1)*(count-k+2)/2;
                }
                count = 0;
            }
            else count++;
        }
        if(count >= k) ans += 1LL * (count-k+1)*(count-k+2)/2;
        cout<<ans<<endl;
    }
    return 0;
}