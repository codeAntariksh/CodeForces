/* 
AUTHOR: Antarikshya Mitra
TIME: 11.47 - 
PROBLEM NO:- Almost Prime
*/


#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 


int32_t main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
		int n;
		cin>>n;
		vector<int> sieve(n+1,0);
		for(int i=2;i<=n;i++)
		{
			if(sieve[i] == 0) {
				for(int j=i;j<=n;j+=i)
					sieve[j]++;
			}
		}
		int count = 0;
		for(int i=2;i<=n;i++)
		{
			if(sieve[i] == 2)
				count++;
		}
		cout<<count<<endl;	
	return 0;
}