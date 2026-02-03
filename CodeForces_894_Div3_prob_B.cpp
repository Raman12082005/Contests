#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> brr(n);
        for(int i=0; i<n; i++) cin>>brr[i];

        vector<int> grr;
        grr.push_back(brr[0]);
        int i = 1, j = 0;
        for(int i = 1; i < n; i++){
            if(brr[i] < brr[i - 1]){

                grr.push_back(brr[i]);
            }
            grr.push_back(brr[i]);
        }
        
        cout<<grr.size()<<endl;
        for(auto it : grr){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
