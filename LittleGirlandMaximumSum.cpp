/* 
AUTHOR: Antarikshya Mitra
TIME: 
PROBLEM NO:- Little Girl and Maximum Sum 276C
*/


#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(vector<int> &arr, vector<pair<int,int>> &queries)
{
    int n = arr.size();
    vector<long long> freq(n + 1, 0);

    // Difference array
    for (auto &q : queries)
    {
        freq[q.first-1]++;
        freq[q.second]--;
    }

    // Prefix sum → actual frequency
    for (int i = 1; i < n; i++)
        freq[i] += freq[i - 1];

    freq.pop_back(); // remove extra element

    // Sort both descending
    sort(arr.begin(), arr.end(), greater<int>());
    sort(freq.begin(), freq.end(), greater<long long>());

    long long ans = 0;
    for (int i = 0; i < n; i++)
        ans += arr[i] * freq[i];

    cout << ans << endl;
}

int32_t main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int n,q;
	cin>>n>>q;
	vector<int> arr(n);
	vector<pair<int,int>> queries(q);
	for (auto &a:arr) 
		cin>>a;
	for(int i=0;i<q;i++)
	{
		cin>>queries[i].first>>queries[i].second;
	}
	solve(arr,queries);
	return 0;
}