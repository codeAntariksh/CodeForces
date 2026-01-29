/* 
AUTHOR: Antarikshya Mitra
TIME: 
PROBLEM NO:- Number of Pairs 1538 C
*/


#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(vector<int> &arr,int l,int r)
{
	int n = arr.size();
	sort(arr.begin(),arr.end());
	int cnt = 0;
	for(int i=0;i<n-1;i++)
	{
		int low,high;
		if(l - arr[i]>=0)
			low = l - arr[i];
		else low = 0;
		high = r - arr[i];
		
		cnt+= upper_bound(arr.begin()+i+1,arr.end(),high) - lower_bound(arr.begin()+i+1,arr.end(),low);
	}
	cout<<cnt<<endl;
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
		int n,l,r;
		cin>>n>>l>>r;
		vector<int> arr(n);
		for (auto &a:arr) 
			cin>>a;
		solve(arr,l,r);
	}	
	return 0;
}