#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(int &n)
{
	cout<<n<<" ";
	while(n>1)
	{
		if(n%2==0)
		{
			n/=2;
		}
		else
		{
			n = n*3 + 1;
		}
		cout<<n<<" ";
	}
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