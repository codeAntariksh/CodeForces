#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 
#define YES cout << "YES\n"
#define NO cout << "NO\n"

void solve(vector<int> &arr,int x)
{
	int n = arr.size();
	int l=0;
	while(l<(int)arr.size()-1)
	{
		if(x<=max(arr[l],arr[l+1]) && x>=min(arr[l],arr[l+1]))
		{
			arr.erase(arr.begin() + l, arr.begin() + l + 2); 
			arr.insert(arr.begin() + l, x);
			if(l>0) l--;
		}
		else l++;
	}
	if(arr.size()==1 && arr[0]==x) YES;
    else NO;
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
		int x;
		cin>>x;
		solve(arr,x);
	}	
	return 0;
}