#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, s, x;
        cin>>n>>s>>x;
        vector<int> arr(n);

        int currsum = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            currsum += arr[i];
        } 

        if(currsum == s){
            cout<<"YES"<<endl;
            continue;
        }
        else if(currsum > s){
            cout<<"NO"<<endl;
            continue;
        }

        int diff = s- currsum;
        if(diff % x == 0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    cout<<endl;
    return 0;
}