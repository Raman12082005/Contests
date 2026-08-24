#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<pair<int, int>> arr;

        for(int i=1; i<=n; i++){
            int x;
            cin>>x;
            x %= k;
            if(x == 0) x = k;
            arr.push_back({x, i});
        }
        sort(arr.begin(), arr.end(), [](pair<int, int>& a, pair<int, int>& b){
            if(a.first != b.first) return a.first > b.first;
            return a.second < b.second;
        });

        for(int i=0; i<n; i++){
            cout<<arr[i].second<<" ";
        }
        cout<<endl;
    }
    return 0;
}