#include<bits/stdc++.h>
using namespace std;

// RECURSIVE
// int min_Path_sum(int i,int j,vector<vector<int>> &nums,vector<vector<int>> &dp)
// {
// 	if(i==0 && j==0)
// 		return nums[i][j];
// 	if(i<0 || j<0 || j>i)
// 		return  INT_MAX;
// 	if(dp[i][j]!=-1) return dp[i][j];
// 	int up = min_Path_sum(i-1,j,nums,dp);
// 	int left_up = min_Path_sum(i-1,j-1,nums,dp);
// 	return dp[i][j] = nums[i][j] + min(up,left_up);
// }

int main()
{
	int m;
	cin>>m;
	vector<vector<int>> nums(m);
	for(int i=0;i<m;i++)
	{
	    for(int j=0;j<=i;j++)
	    {
	        int x;
	        cin>>x;
	        nums[i].push_back(x);
	    }
	}
	vector<vector<int>> dp(m);
	for(int i=0;i<m;i++)
	{
	    for(int j=0;j<=i;j++)
	    {
	        dp[i].push_back(-1);
	    }
	}
	// TABULATION APPROACH
	for(int i=0;i<m;i++)
	{
	    for(int j=0;j<=i;j++)
	    {
	        if(i==0 && j==0)
	        {
	            dp[0][0] = nums[0][0];
	            continue;
	        }
	        int up = INT_MAX;
	        int left_up = INT_MAX;
	        if(i>0 && j<i) up = dp[i-1][j];
	        if(j>0 && i>0) left_up = dp[i-1][j-1];
	        dp[i][j] = nums[i][j] + min(up,left_up);
	    }
	}
	int mini = INT_MAX;
	for(int i=0;i<m;i++)
		mini = min(mini,dp[m-1][i]);
	cout<<mini<<endl;
	// SPACE OPTIMISED APPROACH
// 	vector<int> prev(n,0);
// 	for(int i=0;i<m;i++)
// 	{
// 	    vector<int> cur(n,0);
// 	    for(int j=0;j<n;j++)
// 	    {
// 	        if(i==0 && j==0)
// 	        {
// 	            cur[j] = nums[0][0];
// 	            continue;
// 	        }
// 	        int up = INT_MAX;
// 	        int left = INT_MAX;
// 	        if(i>0) up = prev[j];
// 	        if(j>0) left = cur[j-1];
// 	        cur[j] = nums[i][j] + min(up,left);
// 	    }
// 	    prev = cur;
// 	}
	// for(int i=0;i<m;i++)
	// {
	// 	mini = min(mini,min_Path_sum(m-1,i,nums,dp));
	// }
	// cout<<mini;
    // cout<<prev[n-1]<<endl;
	// cout<<paths(m-1,n-1,dp);
	return 0;
}