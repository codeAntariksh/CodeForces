#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(vector<int> &arr,int k)
{
	int n = arr.size();
	int mx = *max_element(arr.begin(),arr.end());
	while(mx!=0)
	{
	mx = *max_element(arr.begin(),arr.end());
	for(int i = 0;i<n;i++)
	{
		if(arr[i]==mx)
		{
			arr[i]-=k;
			if(arr[i]<=0)
				{
					arr[i]=0;
					cout<<i+1<<" ";
				}
			break;
		}
	}
	}
	cout<<endl;
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
		int n,k;
		cin>>n>>k;
		vector<int> arr(n);
		for (auto &a:arr) 
			cin>>a;
		solve(arr,k);
	}	
	return 0;
}