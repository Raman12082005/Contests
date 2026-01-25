#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++) cin>>arr[i];

        for(int i=0; i<n; i++){
            int pos = i;
            for(int j=pos; j<n; j++){
                if(arr[pos] < arr[j]){
                    pos = j;
                }
            }

            if(pos != i){
                reverse(arr.begin()+i, arr.begin()+pos+1);
                break;
            }
        }
        for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    return 0;
}