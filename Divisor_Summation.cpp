/* 
AUTHOR: Antarikshya Mitra
TIME: 2:19 AM - 2:38 AM
PROBLEM NO:- DIVISOR SUMMATION
*/


#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

vector<int> sieve(1e7+1);




void precompute() {
	for(int i=2;i*i<sieve.size();i++)
	{
		if(sieve[i]==i) {
			for(int j=i*i;j<sieve.size();j+=i)
			{
				if(sieve[j]==j) sieve[j]=i;
			}
		}
	}
}

void solve(vector<int> arr)
{
	int n = arr.size();
	for(int i=0;i<n;i++)
	{
		int x = arr[i];
		int res=1;
		while(x>1)
		{
			int alpha = 0;
			int spf = sieve[x];
			while(x%spf==0)
			{
				alpha++;
				x/=spf;
			}
			res*=(pow(spf,alpha+1)-1)/(spf-1);
		}
		cout<<res-arr[i]+1<<endl;
	}
}

int32_t main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int n;
	for(int i=1;i<sieve.size();i++)
		sieve[i]=i;
	precompute();
	cin>>n;
	vector<int> arr(n);
	for (auto &a:arr) 
		cin>>a;
	solve(arr);
	return 0;
}