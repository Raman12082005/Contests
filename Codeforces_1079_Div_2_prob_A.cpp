#include<bits/stdc++.h>
using namespace std;
int sod(long long n){
    long long sum = 0;
    while(n != 0){
        sum += n % 10;
        n = n/10;
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;

        long long count = 0;
        for(long long y=x; y<=x+90; y++){
            if(y - x == sod(y)){
                count++;
            }
        }
        cout<<count<<endl;
    }
    cout<<endl;
    return 0;
}