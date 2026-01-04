#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(vector<int> &arr,int k)
{
	int n = arr.size();
	vector<int> hash(n);
	for(int i=0;i<n;i++)
	{
		hash[i] = arr[i]%k;
		if(hash[i]==0)
		{
			cout<<0<<endl;
			return;
		}
	}
	if(k==2)
	{
		cout<<1<<endl;
		return;
	}
	if(k==4)
	{
		int even=0;
		for(auto &x:hash)
		{
			if(x%2==0) even++;
			if(even==2)
			{
				cout<<0<<endl;
				return;
			}
		}
		if(even==1)
		{
			cout<<1<<endl;
			return;
		}
		else 
		{
			for(auto &x:hash)
			{
				if(x==3)
				{
					cout<<1<<endl;
					return;
				}
			}
			cout<<2<<endl;
			return;
		}
	}
	int maximum = *max_element(hash.begin(),hash.end());
	cout<<k-maximum<<endl;
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
		int k;
		cin>>n>>k;
		vector<int> arr(n);
		for (auto &a:arr) 
			cin>>a;
		solve(arr,k);
	}	
	return 0;
}