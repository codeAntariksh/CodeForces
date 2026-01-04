#include<bits/stdc++.h>
using namespace std;

void solve(int arr[],int sz)
{
	int avg=0;
	for(int i=0;i<sz;i++)
	{
		int sum = 0;
		for(int j=i;j<sz;j++)
		{
			sum+=arr[j];
			avg = max(avg,sum/(j-i+1));
		}
	}
	cout<<avg<<endl;
}

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--)
	{
		int sz;
		cin>>sz;
		int arr[sz];
		for(int i=0;i<sz;i++)
			cin>>arr[i];
		solve(arr,sz);
	}	
	return 0;
}