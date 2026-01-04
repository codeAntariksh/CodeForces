#include <bits/stdc++.h>
using namespace std;
#define MOD 676767677
#define int long long

// Use inline + reserve + reference passing
inline vector<vector<int>> combinations(int sz)
{
    int comb = 1LL << sz;                 
    vector<vector<int>> all;
    all.reserve(comb);  // reserve memory upfront

    for (int mask = 0; mask < comb; ++mask) 
    {
        vector<int> bits;
        bits.reserve(sz);  // reserve memory once

        // no need for sz - 1 to 0; direct 0..sz-1 is fine
        for (int j = 0; j < sz; ++j)
            bits.push_back(((mask >> j) & 1) ? 1 : -1);

        all.emplace_back(std::move(bits)); // move instead of copy
    }
    return all;
}

inline void solve(const vector<int> &arr)
{
    const int sz = arr.size();
    int ans = 0;

    vector<vector<int>> sol = combinations(sz);

    // cache frequently used values
    for (auto &bits : sol)
    {
        vector<int> prefixNeg(sz), suffixPos(sz);
        prefixNeg[0] = (bits[0] == -1);
        for (int i = 1; i < sz; ++i)
            prefixNeg[i] = prefixNeg[i - 1] + (bits[i] == -1);

        suffixPos[sz - 1] = (bits[sz - 1] == 1);
        for (int i = sz - 2; i >= 0; --i)
            suffixPos[i] = suffixPos[i + 1] + (bits[i] == 1);

        bool correct = true;
        for (int j = 0; j < sz; ++j)
        {
            int sum = prefixNeg[j] + suffixPos[j];
            if (sum != arr[j]) { correct = false; break; }
        }
        ans += correct;
    }

    cout << (ans % MOD) << '\n';
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int sz;
        cin >> sz;
        vector<int> arr(sz);
        for (int &x : arr)
            cin >> x;

        solve(arr);
    }
    return 0;
}
