/* 
AUTHOR: Antarikshya Mitra
TIME: 11:36 PM - 11:54 PM
PROBLEM NO:- AND 0, SUM BIG
*/


#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(int &n,int &k)
{
	int val = n;
	for(int i = 2;i<=k;i++)
		val = (val * n) % MOD;
	cout<<val<<endl;
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