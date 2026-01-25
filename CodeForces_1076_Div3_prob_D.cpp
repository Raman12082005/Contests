#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        sort(a.begin(), a.end());  // sort swords ascending

        // prefix sum of monster strikes
        vector<long long> pref(n);
        pref[0] = b[0];
        for (int i = 1; i < n; i++) pref[i] = pref[i-1] + b[i];

        long long maxScore = 0;
        set<long long> difficulties(a.begin(), a.end()); // try only existing strengths

        for (long long x : difficulties) {
            // count usable swords
            int usable = n - (lower_bound(a.begin(), a.end(), x) - a.begin());

            // find max levels we can complete with 'usable' swords
            int l = 0, r = n-1, levels = 0;
            while (l <= r) {
                int m = (l + r)/2;
                if (pref[m] <= usable) {
                    levels = m+1;
                    l = m+1;
                } else r = m-1;
            }

            maxScore = max(maxScore, x * 1LL * levels);
        }

        cout << maxScore << "\n";
    }

    return 0;
}
