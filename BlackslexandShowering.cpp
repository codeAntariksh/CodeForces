#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        int total = 0;
        for (int i = 0; i + 1 < n; i++)
            total += abs(a[i] - a[i + 1]);

        int ans = total;

        // Remove first
        ans = min(ans, total - abs(a[0] - a[1]));

        // Remove last
        ans = min(ans, total - abs(a[n-2] - a[n-1]));

        // Remove middle
        for (int i = 1; i + 1 < n; i++) {
            int cur = total
                - abs(a[i] - a[i-1])
                - abs(a[i] - a[i+1])
                + abs(a[i-1] - a[i+1]);
            ans = min(ans, cur);
        }

        cout << ans << '\n';
    }
    return 0;
}
