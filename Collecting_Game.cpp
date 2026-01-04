#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 
bool cmp(int a, int b) {
    return a > b;   // bigger element comes first
}

void solve(vector<int> &arr)
{
	int n = arr.size();
	vector<int> copy = arr;
	vector<int> sum(n);
	vector<int> hash(n);
	hash[0] = n-1;
	sort(copy.begin(),copy.end(),cmp);
	sum = copy;
	for(int i = n-2;i>=0;i--)
	{
		sum[i]+=sum[i+1];
	}
	for(int i=1;i<n;i++)
	{
		if(sum[i]>=copy[i-1])
		{
			hash[i] = hash[i-1];
		}
		else
		{
			hash[i] = n-i-1;
		}
	}
	// Now
	for(int i = 0;i<n;i++)
	{
		int idx = lower_bound(copy.begin(),copy.end(),arr[i],greater<int>()) - copy.begin();
		cout<<hash[idx]<<" ";
	}
	cout<<endl;
	return;
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
		if(n==1)
		{
			cout<<0<<endl;
			continue;
		}
		solve(arr);
	}	
	return 0;
}