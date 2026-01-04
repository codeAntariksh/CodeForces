#include<bits/stdc++.h>
using namespace std;


int solve(vector<vector<int>> &tasks,vector<vector<int>> &dp,int day,int task)
{
	if(day==0)
	{
		int maxi = -1;
		for(int i = 0;i<3;i++)
		{
			if(task!=i)
			{
				maxi = max(tasks[day][i],maxi); 
			}
		}
			return maxi;
	}
	if(dp[day][task]!=-1) return dp[day][task];
	int maxi = 0;
	for(int i = 0;i<3;i++)
	{
		if(task!=i)
		{
			int value = tasks[day][i] + solve(tasks,dp,day-1,i);
			maxi = max(maxi,value);
		}
	}
	return dp[day][task] = maxi;
}


int main()
{
	int n;
	cin>>n;
	vector<vector<int>> tasks(n,vector<int>(3));
	for(int i = 0;i<n;i++)
	{
		for(int j = 0;j<3;j++)
		{
			cin>>tasks[i][j];
		}
	}
	vector<vector<int>> dp(n,vector<int>(4,-1));
	int ans = solve(tasks,dp,n-1,3);
	cout<<ans<<endl;
	return 0;
}