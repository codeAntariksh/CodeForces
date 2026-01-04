#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(int &n)
{
	if(n==1)
	{
		cout<<1<<endl;
		return;
	}
	if(n==2 || n==3)
	{
		cout<<"NO SOLUTION"<<endl;
		return;
	}
	for(int i=2;i<=n;i+=2)
	{
		cout<<i<<" ";
	}
	for(int i=1;i<=n;i+=2)
		cout<<i<<" ";
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