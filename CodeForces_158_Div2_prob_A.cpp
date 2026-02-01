#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin>>n>>x;
        vector<int> arr(n);
        for(int i=0; i<n; i++) cin>>arr[i];
        
        int maxi = arr[0] - 0;
        for(int i=1; i<n; i++){
            maxi = max(maxi, arr[i]- arr[i-1]);
        }
        maxi = max(maxi, 2 * (x - arr[n-1]));

        cout<<maxi<<endl;
    }
    cout<<endl;
    return 0;
}
