#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

bool canfit(int mid,int w,int h,int target)
{
	int max_h = mid/h;
	int max_w = mid/w;
	// Avoiding int overflow
	if(max_h==0 || max_w==0)
		return false;
	return max_w>=(target+max_h-1)/max_h;
}


void solve(int &w,int &h,int n)
{
	int low = 1;
	int high = max(w,h) * n;
	int ans = -1;
	while(low<=high)
	{
		int mid = low + (high-low)/2;
		if(canfit(mid,w,h,n))
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
	int w,h,n;
	cin>>w>>h>>n;
	solve(w,h,n);	
	return 0;
}