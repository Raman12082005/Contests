#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
        while(t--){
            int a, b, c, d;
            cin>>a>>b>>c>>d;

            if(b == d && c > a){
                cout<<-1<<endl;
                continue;
            }
            if(d < b){
                cout<<-1<<endl;
                continue;
            }

            if((d - b) < (c - a)){
                cout<<-1<<endl;
                continue;
            }
            if((c-a) == (d - b)){
                cout<<(c - a)<<endl;
                continue;
            }

            if(b == d && c < d){
                cout<<(a - c)<<endl;
                continue;
            }

            int count = 0;
            while((d - b) != (c - a)){
                a = a-1;
                count++;
            }
            cout<<count + (d - b)<<endl;
        }
        cout<<endl;
        return 0;
}