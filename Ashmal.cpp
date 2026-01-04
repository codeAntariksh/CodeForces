#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

int lexCompare(const string &a, const string &b)
{
    int n = min(a.size(), b.size());

    for (int i = 0; i < n; i++)
    {
        if (a[i] < b[i])
            return -1;   
        else if (a[i] > b[i])
            return 1;    
    }

    // All characters matched so far
    if (a.size() < b.size())
        return -1;
    else if (a.size() > b.size())
        return 1;
    else
        return 0;       
}



void solve(vector<string> arr)
{
	int n = arr.size();
	string ans;
	for(int i = 0;i<n;i++)
	{
		if (arr[i] + ans < ans + arr[i])
    		ans = arr[i] + ans;
		else
    		ans = ans + arr[i];
	}
	cout<<ans<<endl;
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
		int n;
		cin>>n;
		vector<string> arr(n);
		for (auto &a:arr) 
			cin>>a;
		solve(arr);
	}	
	return 0;
}