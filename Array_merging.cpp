#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> a(n), b(n), c;
        int ans = 0;
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];

        unordered_map<int, int> ma, mb;
        int count = 1;
        for(int i=1; i<n; i++){
            if(a[i-1] == a[i]) count++;
            else{
                ma[a[i-1]] = max(ma[a[i-1]], count);
                count = 1;
            }
        }
        ma[a[n-1]] = max(ma[a[n-1]], count);

        count = 1;
        for(int i=0; i<n; i++){
            if(b[i-1] == b[i]) count++;
            else{
                mb[b[i-1]] = max(mb[b[i-1]], count);
                count = 1;
            }
        }
        mb[b[n-1]] = max(mb[b[n-1]], count);

        for(auto it : ma){
            int key = it.first;
            int value = it.second;
            ans = max(ans, value + mb[key]);
        }
        for(auto it : mb){
            int key = it.first;
            int value = it.second;
            ans = max(ans, value + ma[key]);
        }
        cout<<ans<<endl;
    }
    return 0;
}