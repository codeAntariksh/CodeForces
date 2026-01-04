#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(vector<int> &arr)
{
	int n = arr.size();
	sort(arr.begin(),arr.end());
	int median = -1;
	if(n%2==1)
		median = arr[n/2];
	else median = arr[n/2-1];
	int res = 0;
	for(int &x:arr)
		res+=abs(x-median);
	cout<<res<<endl;
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