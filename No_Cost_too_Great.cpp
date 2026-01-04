#include<bits/stdc++.h>
using namespace std;
#define MOD 676767677
#define int long long

vector<vector<int>> combinations(int sz)
{
    int comb = 1 << sz;                 
    vector<vector<int>> all;
    for (int mask = 0; mask < comb; mask++) 
    {
        vector<int> bits;
        for (int j = sz - 1; j >= 0; j--) 
        {
            int bit = (mask >> j) & 1;
            bits.push_back(bit ? 1 : -1);
        }
        all.push_back(bits);
    }
    return all;
}

void solve(int arr[],int sz)
{
	int ans=0;
	vector<vector<int>> sol = combinations(sz);
	for(int i=0;i<sol.size();i++)
	{
		bool correct = false;
		for(int j=0;j<sol[i].size();j++)
		{
			int check = arr[j];
			int sum = 0;
			for(int k=0;k<sol[i].size();k++)
			{
				if(k<=j)
				{
					if(sol[i][k]==-1) sum++;
				}
				if(k>=j)
				{
					if(sol[i][k]==1) sum++;
				}
			}
			if(check!=sum) 
			{
				correct = false;	
				break; 
			}
			if(j==sz-1) correct=true;
		}
		if(correct == true) ans++;
	}
	cout<<(ans%MOD)<<endl;
}

int32_t main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--)
	{
		int sz;
		cin>>sz;
		int arr[sz];
		for(int i=0;i<sz;i++)
			cin>>arr[i];
		solve(arr,sz);
	}	
	return 0;
}