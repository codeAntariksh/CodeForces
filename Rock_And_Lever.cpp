/* 
AUTHOR: Antarikshya Mitra
TIME: 11:56 PM - 
PROBLEM NO:- ROCK AND LEVER
*/


#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 
const int range = 1e5;
void solve(vector<int> arr)
{
	int n = arr.size();
	// Making Ranges
	vector<int> range(32,0);
	// Putting elements where they belong
	for(int i=0;i<n;i++)
	{
		double place = log2(arr[i]);
		range[(int)place]++;
	}
	// Counting Combinations
	int ans = 0;
	for(int i=0;i<32;i++)
	{
		ans += (range[i] * (range[i]-1)) / 2;
	}
	cout<<ans<<endl;
}

int32_t main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int t=1;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> arr(n);
		for (auto &a:arr) 
			cin>>a;
		solve(arr);
	}	
	return 0;
}