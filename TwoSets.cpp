#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(int &n)
{
	int pdt = n*(n+1)/2;
	if(pdt%2==1)
	{
		cout<<"NO";
		return;
	}
	cout<<"YES"<<endl;
	vector<int> set1;
	vector<int> set2;
	int sum = 0;
	int temp=pdt/2;
	while(n>0)
	{
		if(n+sum<=temp)
		{
			sum+=n;
			set1.push_back(n);
		}
		else set2.push_back(n);
		n--;
	}
	cout<<set1.size()<<endl;
	for(int &x:set1)
		cout<<x<<" ";
	cout<<endl;
	cout<<set2.size()<<endl;
	for(int &x:set2)
		cout<<x<<" ";
	return;
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