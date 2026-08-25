#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> prefix(n);
        prefix[0] = 1;
        set<char> st1;
        st1.insert(s[0]);

        for(int i=1; i<n; i++){
            if(st1.count(s[i])) prefix[i] = prefix[i-1];
            else{
                prefix[i] = prefix[i-1] + 1;
                st1.insert(s[i]);
            }
        }

        vector<int> suffix(n);
        set<char> st2;
        suffix[n-1] = 1;
        st2.insert(s[n-1]);
        for(int i=n-2; i>=0; i--){
            if(st2.count(s[i])) suffix[i] = suffix[i+1];
            else{
                suffix[i] = 1 + suffix[i+1];
                st2.insert(s[i]);
            }
        }

        int ans = INT_MIN;
        for(int i=0; i<n-1; i++) ans = max(ans, prefix[i] + suffix[i+1]);
        cout<<ans<<endl;
    }
    return 0;
}