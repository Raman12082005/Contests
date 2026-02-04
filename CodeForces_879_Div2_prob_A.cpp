#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int sum = 0, pos = 0, neg = 0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;

            if(x == 1) pos++;
            else neg++;
            sum += x;
        }

        int count = 0;
        if(sum < 0){
            while(neg > pos){
                count++;
                neg--;
                pos++;
                sum += 2;
            }
        }
        if(neg % 2 == 0){
            cout<<count<<endl;
        }
        else cout<<count+1<<endl;
    }
    cout<<endl;
    return 0;
}
