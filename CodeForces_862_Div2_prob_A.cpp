#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        int val1 = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            val1 = val1 ^ arr[i];
        }

        if(n % 2 == 1){
            cout<<val1<<endl;
            continue;
        }

        if(val1 == 0){
            cout<<3<<endl;
            continue;
        }
        cout<<-1<<endl;
    }
    cout<<endl;
    return 0;
}
