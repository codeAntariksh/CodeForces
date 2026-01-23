/* 
AUTHOR: Antarikshya Mitra
TIME: 
PROBLEM NO:- MAGIC FORMULAS 424C
*/


#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(vector<int> arr)
{
	int n = arr.size();
	int Q = 0;
	for(int i=0;i<n;i++)
		Q=Q^arr[i];
	vector<int> prefix_XOR(n);
	for(int i=0;i<n;i++)
	{
		prefix_XOR[i] = i; // 0 1 2 3 4
	}
	for(int i=1;i<n;i++)
		prefix_XOR[i] = prefix_XOR[i-1] ^ prefix_XOR[i]; // 0 1 3 0 4 1 7 0
	for(int i=2;i<=n;i++)
	{
		int segments = n/i;
		if(segments%2==1)
			Q = Q ^ prefix_XOR[i-1];
		int remaining = n%i;
		Q = Q ^ prefix_XOR[remaining];
	}
	cout<<Q<<endl;
	return;	
}

int32_t main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int n;
	cin>>n;
	vector<int> arr(n);
	for (auto &a:arr) 
		cin>>a;
	solve(arr);	
	return 0;
}