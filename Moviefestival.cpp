#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

bool cmp(const pair<int,int>&a,pair<int,int> &b)
{
	return a.second<b.second; 
}

void solve(vector<pair<int,int>> &movies)
{
	int n = movies.size();
	sort(movies.begin(),movies.end(),cmp);
	int num = 0;
	int finish = 0;
	for(auto &mov:movies)
	{
		if(finish<=mov.first)
		{
			finish = mov.second;
			num++;
		}
	}
	cout<<num<<endl;
}

int32_t main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
	vector<pair<int,int>> movies(n);
	for(int i=0;i<n;i++)
	{
		cin>>movies[i].first>>movies[i].second;
	}
	solve(movies);	
	return 0;
}