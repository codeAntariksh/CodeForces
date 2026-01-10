/* 
AUTHOR: Antarikshya Mitra
TIME: 11.09 PM -- 11.29 PM
PROBLEM NO:- MOCHA AND MATH (A)
*/


#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(vector<int> arr)
{
	int n = arr.size();
	int mini = arr[0];
	for(int i=1;i<n;i++)
		mini = mini & arr[i];
	cout<<mini<<endl;
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
		vector<int> arr(n);
		for (auto &a:arr) 
			cin>>a;
		solve(arr);
	}	
	return 0;
}