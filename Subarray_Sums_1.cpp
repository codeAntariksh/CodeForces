/* 
AUTHOR: Antarikshya Mitra
TIME: 
PROBLEM NO:- SubArray Sums 1 CSES
*/


#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(vector<int> arr,int &x)
{
	int n = arr.size();
	int l = 0;
	int r = 0;
	int sum = 0;
	int cnt = 0;
	while(r<n && l<=r)
	{
		sum+=arr[r++];
		if(sum==x)
			cnt++;
		else if(sum>x)
		{
			while(sum>x)
			{
				sum-=arr[l];
				l++;
				if(sum==x)
					cnt++;
			}
		}
	}
	cout<<cnt<<endl;
	return;
}

int32_t main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int n,x;
	cin>>n>>x;
	vector<int> arr(n);
	for (auto &a:arr) 
		cin>>a;
	solve(arr,x);
	return 0;
}