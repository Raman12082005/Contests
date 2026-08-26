#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, k, b, s;
        cin>>n>>k>>b>>s;

        long long base = k*b;
        long long remaining = s - base;
        // cond 1
        if(remaining < 0){
            cout<<-1<<endl;
            continue;
        }
        // cond 2
        if(remaining > n*(k-1)){
            cout<<-1<<endl;
            continue;
        }

        vector<long long> a(n, 0);
        a[0] = base;
        for(int i=0; i<n && remaining > 0; i++){
            long long add = min(remaining, k-1);
            a[i] += add;
            remaining -= add;
        }

        for(auto it : a){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}