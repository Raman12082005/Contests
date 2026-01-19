#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, h;
        cin>>n>>m>>h;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        
        vector<pair<int, int>> queries(m);
        for(int i=0; i<m; i++){
            int bi, ci;
            cin>>bi>>ci;
            bi--;
            queries[i] = {bi, ci};
        }

        int pq = 0;
        for(int i=0; i<m; i++){
            int bi = queries[i].first;
            int ci = queries[i].second;

            arr[bi] += ci; // make updation
            // check for invalidation
            if(arr[bi] > h){
                // reverse iteration -> unduing the operations
                for(int j = i; j>=pq; j--){
                    int idx = queries[j].first;
                    int diff = queries[j].second;
                    
                    arr[idx] -= diff;
                }
                pq = i+1;
            }
        }
        for(auto it : arr){
            cout<<it<<" ";
        }
    }
    cout<<endl;
    return 0;
}