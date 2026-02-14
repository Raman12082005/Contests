#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> arr(n, "");
    int m = -1;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        int n = arr[i].size();
        m = max(m, n);
    }

    for(int i=0; i<n; i++){
        int k = (m - arr[i].size()) / 2;

        string str = "";
        while(k){
            str += ".";
            k--;
        }
        str += arr[i];
        k = (m - arr[i].size()) / 2;
        while(k){
            str += ".";
            k--;
        }
        cout<<str<<endl;
    }
    cout<<endl;
    return 0;
}