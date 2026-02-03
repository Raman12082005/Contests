#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> arr(n-1);
        long long neteff = 0;
        for(int i=0; i<n-1; i++){
            cin>>arr[i];
            neteff += ((n-1) * arr[i]);
        }
        
        neteff *= -1;
        cout<<neteff/(n-1)<<endl;
    }
    cout<<endl;
    return 0;
}
