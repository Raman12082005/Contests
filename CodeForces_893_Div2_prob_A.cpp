#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin>>a>>b>>c;

        if(a == b){
            if(c % 2 == 0) cout<<"Second"<<endl;
            else cout<<"First"<<endl;
        }
        if(a > b) cout<<"First"<<endl;
        if(a < b) cout<<"Second"<<endl;
    }
    cout<<endl;
    return 0;
}
