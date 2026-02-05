#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> arr(n);

        for(int i=0; i<n; i++){
            cin>>arr[i];
            int val = n + 1 - arr[i];
            cout<<val<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
