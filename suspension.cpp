#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(int n,int y,int r)
{
	int temp = n-r;
	temp = temp - y/2;
	if(temp<0) cout<<n<<endl;
	else cout<<n-temp<<endl;
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
		int y,r;
		cin>>y>>r;
		solve(n,y,r);
	}	
	return 0;
}