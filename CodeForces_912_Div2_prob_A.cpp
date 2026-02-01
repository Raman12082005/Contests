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
            if(i > 0 && arr[i] < arr[i-1]){
                check = true;
            }
        }

        if(check == false){
            cout<<"YES"<<endl;
            continue;
        }
        if(k < 2){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
    }
    cout<<endl;
    return 0;
}
