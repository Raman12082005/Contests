#include<bits/stdc++.h>
using namespace std;

int value(vector<int>& arr){
    int sum = 0;
    int mx = 0;
    for(int i=0; i<arr.size(); i++){
        mx = max(mx, arr[i]);
        sum += mx;
    }
    return sum;
}
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
        int sum = value(arr);
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                swap(arr[i], arr[j]);
                sum = max(sum, value(arr));
                swap(arr[i], arr[j]);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}