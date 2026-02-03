#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin>>n>>k;
        vector<int> arr(n);
        bool check = false;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i] == k) check = true;
        }
        
        if(check == true){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    cout<<endl;
    return 0;
}
