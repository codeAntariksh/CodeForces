#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(int l,int a,int b)
{
	// 0 --> l-1
	int sum = -1;
	int i = a + b;
	while(i!=a)
	{
		sum = max(sum,i);
		i = (i+b)%l;
	}
	cout<<sum<<endl;
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
		int l,a,b;
		cin>>l>>a>>b;
		solve(l,a,b);
	}	
	return 0;
}