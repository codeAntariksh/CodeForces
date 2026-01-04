#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(vector<int> &arr)
{
	int n = arr.size();
	int moves = 0;
	for(int i = 1;i<n;i++)
	{
		if(arr[i]<arr[i-1])
		{
			moves+=(arr[i-1]-arr[i]);
			arr[i] = arr[i-1];
		}
	}
	cout<<moves<<endl;
}

int32_t main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int n;
	cin>>n;
	vector<int> arr(n);
	for (auto &a:arr) 
		cin>>a;
	solve(arr);	
	return 0;
}