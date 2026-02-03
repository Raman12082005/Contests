#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--) {
        vector<vector<char>> arr(10, vector<char>(10));

        int totalpoints = 0;
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                cin>>arr[i][j];

                if(arr[i][j] == 'X'){
                    if(i == 0 || i == 9 || j == 0 || j == 9){
                        totalpoints += 1;
                    }
                    else if(i == 1 || i == 8 || j == 1 || j == 8){
                        totalpoints += 2;
                    }
                    else if(i == 2 || i == 7 || j == 2 || j == 7){
                        totalpoints += 3;
                    }
                    else if(i == 3 || i == 6 || j == 3 || j == 6){
                        totalpoints += 4;
                    }
                    else if(i == 4 || i == 5 || j == 4 || j == 5){
                        totalpoints += 5;
                    }
                }
            }
        }
        cout<<totalpoints<<endl;
    }
    cout<<endl;
    return 0;
}
