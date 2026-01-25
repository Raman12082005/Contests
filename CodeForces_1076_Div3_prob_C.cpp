#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n+1), b(n+1);
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= n; i++) cin >> b[i];

        // Read queries
        vector<pair<int,int>> queries(q);
        for(int i = 0; i < q; i++) {
            cin >> queries[i].first >> queries[i].second;
        }

        // Compute prefix sums of suffix maximums
        vector<long long> preffix(n+2, 0);
        vector<int> suffix(n+2, 0);
        for(int i = n; i >= 1; i--) {
            suffix[i] = max(b[i], max(a[i], suffix[i+1]));
        }

        for(int i = 1; i <= n; i++) {
            preffix[i] = preffix[i-1] + suffix[i];
        }

        // Answer each query
        for(int i = 0; i < q; i++) {
            int l = queries[i].first;
            int r = queries[i].second;
            cout<<preffix[r] - preffix[l-1]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
