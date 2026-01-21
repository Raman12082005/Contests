#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> color(n+1, 0);
        for(int i=1; i<=n; i++){
            int x;
            cin>>x;
            color[x]++;
        }
        int maxfreq = 0;
        int ans = 0;
        for(int i=1; i<=n; i++){
            if(color[i] > maxfreq){
                maxfreq = color[i];
                ans = i;
            }
        }
        cout<<ans<<endl;
    }
    cout<<endl;
    return 0;
}