#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

pair<int,int> checker(vector<int> &arr,int index)
{
	int n = arr.size();
	if(index==0 || index==n-1) return {-1,-1};
	for(int l = 0;l<index;l++)
	{
		for(int r = index+1;r<n;r++)
		{
			if(max(arr[l],arr[r])>arr[index] && min(arr[l],arr[r])<arr[index])
			{
				return {l,r};
			}
		}
	}
	return {-1,-1};
}




void solve(vector<int> &arr,string &s)
{
	int n = arr.size();
	int k = 0;
	vector<pair<int,int>> vp;
	for(int i=0;i<n;i++)
	{
		if(k==5 && s[i]==1)
		{
			cout<<-1<<endl;
			return;
		}
		if(s[i]=='1')
		{
			pair<int,int> temp = checker(arr,i);
			if(temp.first==-1 && temp.second==-1)
			{
				cout<<-1<<endl;	
				return;
			}
			vp.push_back(temp);
			k++;
		}
	}
	cout<<k<<endl;
	for(auto &p:vp)
	{
		cout<<p.first<<" "<<p.second<<endl;
	}
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
		int n;
		cin>>n;
		vector<int> arr(n);
		string s;
		for (auto &a:arr) 
			cin>>a;
		cin>>s;
		solve(arr,s);
	}	
	return 0;
}