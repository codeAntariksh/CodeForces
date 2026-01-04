#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

bool possible(int mid,int n,int x,int y)
{
	return (mid/x + mid/y >= n-1);
}

void solve(int n,int x,int y)
{
	int low = min(x,y);
	int high = max(x,y)*n;
	int ans = -1;
	while(low<=high)
	{
		int mid = low+(high-low)/2;
		if(possible(mid,n,x,y))
		{
			ans = mid;
			high = mid-1;
		}
		else
			low = mid+1;
	}
	cout<<ans + min(x,y)<<endl;
}

int32_t main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int n,x,y;
	cin>>n>>x>>y;
	if(n==1)
	{
		cout<<min(x,y)<<endl;
		return 0;
	}
	solve(n,x,y);	
	return 0;
}