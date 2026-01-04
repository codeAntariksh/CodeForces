#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(vector<int> &arr)
{
	int n = arr.size();
	vector<int> prefix;
	int cnt = 0;
	int sum = 0;
	for(int i = 0;i<n;i++)
	{
		if(arr[i]==0)
			cnt++;
		sum+=arr[i];
		prefix.push_back(sum);
	}
	if(cnt==n)
	{
		cout<<"NO"<<endl;
		return;
	}
	if(prefix[n-1]==0)
	{
		for(int i = 0;i<n;i++)
		{
			if(prefix[i]!=0)
			{
				cout<<"YES"<<endl;
				cout<<1<<" "<<i+1<<endl;
				cout<<i+2<<" "<<n<<endl;
				break;
			}
		}
	}
	else
	{
		cout<<1<<" "<<n<<endl;
		return;
	}
	return;
}

int32_t main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int n;
	cin>>n;
	vector<int> arr(n);
	for (auto &a:arr) 
		cin>>a;
	solve(arr);	
	return 0;
}