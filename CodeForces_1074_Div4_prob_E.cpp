#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, k;
        cin>>n>>m>>k;

        vector<int> robot(n);
        for(int i=0; i<n; i++) cin>>robot[i];

        set<int> spikes;
        for(int i=0; i<m; i++){
            int x;
            cin>>x;
            spikes.insert(x);
        }

        string moves;
        cin>>moves;
        vector<pair<int, int>> before_after;
        set<pair<int, int>> before, after;

        for(int i=0; i<n; i++){
            auto it = spikes.upper_bound(robot[i]);
            int bef = INT_MAX;
            int aft = INT_MAX;

            if(it != spikes.end()) aft = (*it) - robot[i];
            if(it != spikes.begin()){
                it--;
                bef = robot[i] - (*it);
            }

            before.insert({bef, i});
            after.insert({aft, i});
            before_after.push_back({bef, aft});
        }

        int val = 0, cnt = n;
        for(int i=0; i<k; i++){
            if(moves[i] == 'R') val++;
            else val--;

            if(val > 0){
                while(!after.empty() && val >= (*after.begin()).first){
                    auto it = (*after.begin()).second;
                    after.erase(after.begin());
                    before.erase(before.find({before_after[it].first , it}));
                    cnt--;
                }
            }
            else{
                while(!before.empty() && abs(val) >= (*before.begin()).first){
                    auto it = (*before.begin()).second;
                    before.erase(before.begin());
                    after.erase(after.find({before_after[it].second, it}));
                    cnt--;
                }
            }
            cout<<cnt<<" ";
        }
    }
    cout<<endl;
    return 0;
}