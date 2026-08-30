#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        int white = 0;
        for(int i=0; i<k ; i++) if(s[i] == 'W') white++;

        int ans = white;
        for(int i=k; i<n; i++){
            if(s[i-k] == 'W') white--;
            if(s[i] == 'W') white++;
            ans = min(ans, white);
        }
        cout<<ans<<endl;
    }
    return 0;
}