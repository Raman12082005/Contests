#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        long long sum = 0;
        int smallestMin = INT_MAX;
        int smallestSecond = INT_MAX;

        for (int i = 0; i < n; i++) {
            int m;
            cin>>m;
            vector<int> a(m);
            for (int &x : a) cin >> x;

            sort(a.begin(), a.end());
            int mn1 = a[0];
            int mn2 = a[1];
            sum += mn2;
            smallestMin = min(smallestMin, mn1);
            smallestSecond = min(smallestSecond, mn2);
        }
        long long answer = sum - smallestSecond + smallestMin;
        cout<<answer<<endl;
    }
    return 0;
}