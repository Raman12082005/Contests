#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++) cin>>arr[i];

        int start = 0, end = 0, maxlen = 0;
        while(end < n && start <= end){
            while(end < n && arr[end] == 0){
                maxlen = max(maxlen, end - start +1);
                end++;
            }
            start = end;
            while(end < n && arr[start] == 1){
                end++;
                start++;
            }
        }
        cout<<maxlen<<endl;
    }
    cout<<endl;
    return 0;
}
