#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

bool possible(int mid,int n)
{
	int l_ct = 0;
	for(int i = 1;i<=n;i++)
	{
		l_ct+=min(n,mid/i);	
	}
	return (l_ct>=(n*n+1))/2);

}

void solve(int n)
{
	int low = 1;
	int high = n*n;
	int ans = -1;
	while(low<=high)
	{
		int mid = low+(high-low)/2;
		if(possible(mid,n))
		{
			ans = mid;
			high = mid-1;
		}
		else
			low = mid+1;
	}
	cout<<ans<<endl;
}

int32_t main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int n;
	cin>>n;
	solve(n);	
	return 0;
}