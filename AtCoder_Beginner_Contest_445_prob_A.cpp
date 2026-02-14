#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n = str.size();
    if(str[0] == str[n-1]){
        cout<<"Yes"<<endl;
        return 0;
    }
    cout<<"No"<<endl;
    return 0;
}