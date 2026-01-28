/* 
AUTHOR: Antarikshya Mitra
TIME: 
PROBLEM NO:- Greg and Array 295 A Div 1
*/


#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(vector<int> &arr,vector<vector<int>> &ops,vector<vector<int>> &q)
{
	int n = arr.size();
	int m = ops.size();
	int k = q.size();
	// Firstly Do Suffix of Queries to see Which Queries would work
	vector<int> suffix(m+1,0); // O(k)
	for(int i=0;i<k;i++)
	{
		int l = q[i][0] - 1;
		int r = q[i][1];
		suffix[l]++;
		suffix[r]--;
	}
	for(int i=1;i<m+1;i++)
		suffix[i] += suffix[i-1];
	// Suffix Array for Operations Sorted

	// Now Sorting Out Operations
	// O(m)
	vector<int> suff_final (n+1,0);
	for(int i=0;i<m;i++)
	{
		int mul = suffix[i]*ops[i][2];
		int l = ops[i][0] - 1;
		int r = ops[i][1];
		suff_final[l] += mul;
		suff_final[r] -= mul;
	}
	cout<<suff_final[0] + arr[0]<<" ";
	for(int i = 1;i<n;i++)
	{
		suff_final[i] += suff_final[i-1];
		cout<<suff_final[i] + arr[i]<<" ";
	}
	return;
}

int32_t main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> arr(n); // a1..an
	for (auto &a:arr) 
		cin>>a;
	vector<vector<int>> ops(m,vector<int> (3)); // li, ri, di
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>ops[i][j];
		}
	}
	vector<vector<int>> q(k,vector<int> (2)); //xi and yi
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>q[i][j];
		}
	}
	solve(arr,ops,q);	
	return 0;
}