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
        
        vector<int> brr, crr;
        sort(arr.begin(), arr.end());
        brr.push_back(arr[0]);

        int start = 1;
        while(start < n && brr[0] == arr[start]){
            brr.push_back(arr[start]);
            start++;
        }
        while(start < n){
            crr.push_back(arr[start]);
            start++;
        }

        // output
        if(brr.size() <= 0 || crr.size() <= 0){
            cout<<-1<<endl;
            continue;
        }
        cout<<brr.size()<<" "<<crr.size()<<endl;
        for(auto it : brr){
            cout<<it<<" ";
        }
        cout<<endl;
        for(auto it : crr){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
