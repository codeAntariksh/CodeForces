#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(vector<int> &arr)
{
	int n = arr.size();
	int max = arr[0];
	int rest = 0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>=max)
		{
			max = arr[i];
		}
		rest+=arr[i];
	}
	max = max*2;
	if(rest>max)
	{
		cout<<rest;
	}
	else
	{
		cout<<max;
	}
	return;
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