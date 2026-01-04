#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(vector<int> &arr)
{
	int n = arr.size();
	vector<int> result;
    for (int x : arr) 
    {
        if(x!=0)
            result.push_back(x);
    }
    sort(result.begin(), result.end(), greater<int>());
    int max_ops = 0;
    for(int i=result.size()-1;i>=0;i--)
    {
    	max_ops=1;
    	for(int j=result.size()-1;j>i;j--)
    	{
    		max_ops++;
    	}
    	for(int k=0;k<=i;k++)
    	{
    		int temp = result[k]-1;
    		max_ops+=temp;
    		if(max_ops>=n)
    		{
    			cout<<i+1<<endl;
    			return;
    		}
    	}
    }

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