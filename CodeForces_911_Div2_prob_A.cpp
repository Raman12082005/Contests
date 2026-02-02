#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;

        int empty = 0, blocked = 0;
        bool check = false;
        if(str[0] == '.') empty++;
        if(str[1] == '.') empty++;
        if(str[0] == '#') blocked++;
        if(str[1] == '#') blocked++;

        for(int i=2; i<n; i++){
            if(str[i] == '.' && str[i-1] == '.' && str[i-2] == '.'){
                cout<<2<<endl;
                check = true;
                break;
            }
            if(str[i] == '.') empty++;
            if(str[i] == '#') blocked++;
        }

        if(check == true) continue;

        cout<<empty<<endl;
    }
    cout<<endl;
    return 0;
}