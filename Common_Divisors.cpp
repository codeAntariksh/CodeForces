/* 
AUTHOR: Antarikshya Mitra
TIME: 1:24 AM - 2:19 AM
PROBLEM NO:- CSES Common Divisors
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
	vector<int> arr(n);
	for(auto &a:arr) 
		cin>>a;
	const int MAX = *max_element(arr.begin(),arr.end());
	vector<int> sieve(MAX+1,0);
	for(int i=0;i<arr.size();i++)
	{
		sieve[arr[i]]++;
	}
	for(int i=MAX;i>=1;i--)
	{
		int count = 0;
		for(int j=i;j<=MAX;j+=i)
		{
			count+=sieve[j];
			if(count>=2)
			{
				cout<<i<<endl;
				return 0;
			}
		}
	}
	cout<<1<<endl;
	return 0;
}