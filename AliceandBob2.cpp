#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(vector<int> &arr,int a)
{
	int n = arr.size();
	int L = lower_bound(arr.begin(), arr.end(), a) - arr.begin();
    int G = arr.end() - upper_bound(arr.begin(), arr.end(), a);
    if (G >= L) cout << a + 1 << "\n";
    else cout << a - 1 << "\n";
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
		int n,a;
		cin>>n>>a;
		vector<int> arr(n);
		for (auto &c:arr) 
			cin>>c;
		solve(arr,a);
	}	
	return 0;
}