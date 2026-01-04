#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(vector<int> &arr,int a)
{
	int n = arr.size();
	vector<int> diffarr;
	for(auto &x:arr)
	{
		diffarr.push_back(abs(x-a));
	}
	int index = 0;
	for(int i=0;i<n;i++)
	{
		if(diffarr[i]<diffarr[index])
			index = i;
	}
	int ind = 0;
	if(index>=n/2)
	{
		int temp = index;
		while(true)
		{
			temp--;
			if(diffarr[temp]!=diffarr[index])
			{
				ind = temp;
				break;
			}
			if(temp==0)
			{
				ind = -1;
				break;
			}
		}
	}
	else
	{
		int temp = index;
		while(true)
		{
			temp++;
			if(diffarr[temp]!=diffarr[index])
			{
				ind = temp;
				break;
			}
			if(temp==n-1)
			{
				ind = -1;
				break;
			}
		}
	}
	if(ind!=-1)
	{
		cout<<arr[ind]<<endl;
	}
	else cout<<arr[n-1]<<endl;
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
		int n,a;
		cin>>n>>a;
		vector<int> arr(n);
		for (auto &c:arr) 
			cin>>c;
		solve(arr,a);
	}	
	return 0;
}