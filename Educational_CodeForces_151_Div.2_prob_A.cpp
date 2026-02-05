#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin>>n>>k>>x;
        
        vector<int> ans;
        int val = 1;
        while(n != 0 && val <= k && val <= n){
            if(val == x){
                val++;
                continue;
            }
            while(n != 0 && n >= val && val <= k){
                if(n <= k && n != x){
                    ans.push_back(n);
                    n -= n;
                    break;
                }

                n -= val;
                ans.push_back(val);
            }
            val++;
        }

        if(n != 0){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        cout<<ans.size()<<endl;
        for(auto it : ans) cout<<it<<" ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
