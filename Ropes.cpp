#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

bool possible(double mid,vector<int> &nums,int k)
{
	int count = 0;
	for(auto &x:nums)
	{
		count+=(int)x/mid;
		if(count>=k) return true;
	}
	return false;
}

void solve(int n,int k,vector<int> &nums)
{
	double low = 0;
	double high = *max_element(nums.begin(),nums.end());
	while(high-low>1e-6)
	{
		double mid = low+(high-low)/2;
		if(possible(mid,nums,k))
		{
			low = mid;
		}
		else
			high = mid;
	}
	cout<<fixed<<setprecision(6)<<low<<endl;
}

int32_t main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int n,k;
	cin>>n>>k;
	vector<int> nums(n);
	for(int i = 0;i<n;i++)
		cin>>nums[i];
	solve(n,k,nums);	
	return 0;
}