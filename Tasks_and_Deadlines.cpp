#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(vector<pair<int,int>> &tasks)
{
	int n = tasks.size();
	sort(tasks.begin(),tasks.end());
	int time = 0;
	int reward = 0;
	for(auto &task:tasks)
	{
		time+=task.first;
		reward+=(task.second-time);
	}
	cout<<reward<<endl;
}

int32_t main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin>>n;
	vector<pair<int,int>> tasks(n);
	for(int i=0;i<n;i++)
	{
		cin>>tasks[i].first>>tasks[i].second;
	}
	solve(tasks);	
	return 0;
}