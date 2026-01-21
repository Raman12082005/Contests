#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<int> lower(n), upper(m);
        for(int i=0; i<n; i++) cin>>lower[i];
        for(int i=0; i<m; i++) cin>>upper[i];
        
        int cnt = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(lower[i] > upper[j]) cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    cout<<endl;
    return 0;
}