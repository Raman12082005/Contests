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

        bool ispossible = true;
        vector<int> p(n);
        int i = 0;
        while(i < n){
            int j = i;

            while(j < n && arr[i] == arr[j]) j++;

            if(j-i == 1){
                ispossible = false;
                break;
            }

            for(int k = i; k<j-1; k++) p[k] = k+2;
            p[j-1] = i+1;
            i = j;
        }
        if(!ispossible){
            cout<<-1<<endl;
            continue;
        }
        for(int i=0; i<n; i++){
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}