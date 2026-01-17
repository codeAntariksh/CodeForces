/* 
AUTHOR: Antarikshya Mitra
TIME: 2:20 AM - 3:09 AM
PROBLEM NO:- Alyona and Mex
*/


#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(vector<int> arr,int &siz)
{
	int n = arr.size();
	int min_siz = INT_MAX;
	pair<int,int> indices;
	for(int i=0;i<n;i+=2)
	{
		if(min_siz>abs(arr[i]-arr[i+1])+1)
		{
			indices.first = arr[i];
			indices.second = arr[i+1];
			min_siz = abs(arr[i]-arr[i+1])+1;
		}
		// min_siz = min(min_siz,abs(arr[i]-arr[i+1])+1);
	}
	cout<<min_siz<<endl;
	// cout<<indices.first<<" "<<indices.second<<endl;
	vector<int> ans(siz,-1);
	int cnt = 0;
	for(int i=indices.first-1;i<=indices.second-1;i++)
	{
		ans[i] = cnt;
		cnt++;
	}
	cnt = 0;
	for(int i = 0;i<siz;i++)
	{
		if(ans[i]!=-1){
			cnt=0;
			continue;
		}
		ans[i] = cnt;
		cnt++;
	}
	for(int i=0;i<siz;i++)
		cout<<ans[i]<<" ";
	return;
}

int32_t main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
		int n,m;
		cin>>n>>m;
		vector<int> arr(m*2);
		for (auto &a:arr) 
			cin>>a;
		solve(arr,n);
	return 0;
}