#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        bool check = false;
        int smallest = 15;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(i > 0 && arr[i] < arr[i-1]) check = true;
            if(arr[i] < smallest) smallest = arr[i];
        }

        // if(check == false){
        //     cout<<"YES"<<endl;
        //     continue;
        // }
        if(smallest != arr[0]){
            cout<<"NO"<<endl;
            continue;
        }

        cout<<"YES"<<endl;
    }
    cout<<endl;
    return 0;
}