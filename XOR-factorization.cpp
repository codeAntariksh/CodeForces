#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(int n,int k)
{
	if(k==1)
	{
		cout<<n<<endl;
		return;
	}
	if(k%2==0)
		cout<<0<<" "<<n<<" ";
	else
		cout<<n<<" "<<n<<" ";
	for(int i = 0;i<k-2;i++)
		cout<<n<<" ";
	cout<<endl;
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
		int n,k;
		cin>>n>>k;
		solve(n,k);
	}	
	return 0;
}