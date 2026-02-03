#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin>>n>>m;
        string x, s;
        cin >> x >> s;

        int count = 0;
        bool check = false;

        while(n < m){
            if(x.find(s) != string::npos){
                check = true;
                break;
            }
            else{
                x += x;
                count++;
                n = x.size();
            }
        }

        if(check == true){
            cout << count << endl;
            continue;
        }

        if(x.find(s) != string::npos){
            cout << count << endl;
            continue;
        }

        x += x;
        count++;
        n = x.size();   // (not strictly needed here, but kept consistent)

        if(x.find(s) != string::npos){
            cout << count << endl;
            continue;
        }

        cout << -1 << endl;
    }

    return 0;
}
