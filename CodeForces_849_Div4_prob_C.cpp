#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin>>n;
        string str;
        cin>>str;

        int start = 0;
        int end = str.size()-1;
        while(str.size() > 1 && start <= end){
            if(str[start] != str[end]){
                str.pop_back();
                str = str.substr(1);
                end = str.size()-1;
            }
            else break;
        }
        cout<<str.size()<<endl;
    }
    cout<<endl;
    return 0;
}
