#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(vector<int> &arr)
{
	int n = arr.size();
	for(int i=0;i<arr.size()-1;i++)
	{
		for(int j=i+1;j<arr.size();j++)
		{
			int x;
			x = arr[j]%arr[i];
			if(x%2==0)
				{
					cout<<arr[i]<<" "<<arr[j]<<endl;
					return;
				}
		}
	}
	cout<<"-1"<<endl;
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
		solve(arr);
	}	
	return 0;
}