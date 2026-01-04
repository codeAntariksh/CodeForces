#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

bool ispossible(vector<int> &arr,int mid,int k)
{
	int pdt = 0;
	for(int i = 0 ; i < arr.size() ; i++)
	{
		pdt = pdt + (mid/arr[i]);
		if(pdt>=k)
			return true;
	}
	return false;
}


void solve(vector<int> &arr,int k)
{
	int n = arr.size();
	int ans = -1;
	int low = 1;
	int high = *max_element(arr.begin(),arr.end()) * k;
	while(low<=high)
	{
		int mid = low + (high-low)/2;
		if(ispossible(arr,mid,k))
		{
			ans = mid;
			high = mid-1;
		}
		else
			low = mid+1;
	}
	cout<<ans<<endl;
	return;
}

int32_t main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int n,k;
	cin>>n>>k;
	vector<int> arr(n);
	for (auto &a:arr) 
		cin>>a;
	solve(arr,k);
	return 0;
}