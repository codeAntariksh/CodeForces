#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(int n)
{
	int count = 0;
	int maxi = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int sum = 0;
			count++;
			if(j-1>=0) sum+=(count-1);
			if(j+1<n) sum+=(count+1);
			if(i-1>=0) sum+=(count-n);
			if(i+1<n) sum+=(count+n);
			sum+=count;
			maxi=max(sum,maxi);
		}
	}
	cout<<maxi<<endl;
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
		solve(n);
	}	
	return 0;
}