#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int ans = INT_MAX;

        int min1 = INT_MAX;
        int min2 = INT_MAX;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            int cost = (k - x % k) % k;
            ans = min(ans, cost);

            int evenCost = x % 2;

            if (evenCost < min1) {
                min2 = min1;
                min1 = evenCost;
            }
            else if (evenCost < min2) {
                min2 = evenCost;
            }
        }

        if (k == 4) {
            ans = min(ans, min1 + min2);
        }

        cout << ans << '\n';
    }

    return 0;
}