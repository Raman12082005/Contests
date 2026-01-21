#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++) cin>>arr[i];
        
        
        int ans = 0;
        int idx = n;
        for(int i=n-1; i>=0; i--){
            if(arr[i] != idx){
                ans = arr[i];
                break;
            }
            idx--;
        }
        cout<<ans<<endl;
    }
    cout<<endl;
    return 0;
}