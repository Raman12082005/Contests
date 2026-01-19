#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());

        int size = 1, maxsize = 1;
        int i = 0, j = 1;
        for(int i=1; i<n; i++){
            if(arr[i] == arr[i-1]) continue;
            if(arr[i] == arr[i-1]+1){
                size++;
            }
            else{
                size = 1;
            }
            maxsize = max(maxsize, size);
        }
        
        cout<<maxsize<<endl;
    }
    return 0;
}