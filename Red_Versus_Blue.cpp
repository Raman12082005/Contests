#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r, b;
        cin>>n>>r>>b;

        int groups = b+1;
        int x = r/groups;
        int rem = r % groups;

        string res = "";
        for(int i=0; i<groups; i++){
            int cnt = x;
            
            if(rem > 0){
                cnt++;
                rem--;
            }
            res += string(cnt, 'R');
            if(b > 0){
                res += 'B';
                b--;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}