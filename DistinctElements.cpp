#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

int freqcount(vector<int> &arr)
{
	int freq=1;
	int num = 1;
	for(int i=1;i<arr.size();i++)
	{
		if(arr[i-1]!=arr[i])
		{
			num++;
		}
		freq+=num;
	}
	return freq;
}

void solve(vector<int> &arr)
{
	int n = arr.size();
	vector<int> ans(n);
	ans[0]=n;
	int temp = n;
	for(int i=1;i<n;i++)
	{
		int count=1;
		vector<int> build;
		for(int j=i-1;j>=0;j--)
		{
			build.push_back(ans[j]);
		}
		count+=freqcount(build);
		if(count<arr[i])
			{
				ans[i]=temp-1;
				temp--;
			}
		else ans[i]=temp;
	}
	for(auto &x:ans)
		cout<<x<<" ";
	cout<<endl;
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