#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int mini = INT_MAX;
    for(int i=0; i<n; i++){
        cin>>arr[i];

        int val = abs(arr[i]);
        if(mini > val) mini = val;
        if(mini == 0){
            break;
        }
    }
    cout<<mini<<endl;
    cout<<endl;
    return 0;
}
