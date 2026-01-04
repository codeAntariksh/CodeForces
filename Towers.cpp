#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(vector<int> &arr)
{
	int n = arr.size();
	vector<int> list;
	for(int i=0;i<n;i++)
	{
		int idx = upper_bound(list.begin(),list.end(),arr[i])-list.begin();
		if(idx==list.size())
			list.push_back(arr[i]);
		else
			list[idx]=arr[i];
	}
	cout<<list.size()<<endl;
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