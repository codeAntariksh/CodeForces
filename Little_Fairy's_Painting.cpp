#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(vector<int> &arr)
{
	int n = arr.size();
	unordered_map<int,int> mpp;
	for(int i=0;i<n;i++)
	{
		mpp[arr[i]]++;
	}
	int unique = mpp.size();
	while(1)
	{
		auto it = mpp.find(unique);
		if(it!=mpp.end)
		{
			cout<<unique<<endl;
			return;
		}
		unique++;
	}
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