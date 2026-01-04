#include<bits/stdc++.h>
using namespace std;

// RECURSIVE
// int min_Path_sum(int i,int j,vector<vector<int>> &nums,vector<vector<int>> &dp)
// {
// 	if(i==0 && j==0)
// 		return nums[i][j];
// 	if(i<0 || j<0)
// 		return  INT_MAX;
// 	if(dp[i][j]!=-1) return dp[i][j];
// 	int up = INT_MAX;
// 	int left = INT_MAX;
// 	if(i>0) up = min_Path_sum(i-1,j,nums,dp);
// 	if(j>0) left = min_Path_sum(i,j-1,nums,dp);
// 	return dp[i][j] = nums[i][j] + min(up,left);
// }

int main()
{
	int m,n;
	cin>>m>>n;
	vector<vector<int>> nums(m,vector<int> (n,0));
// 	vector<vector<int>> dp(m,vector<int> (n,-1));
	for(int i = 0;i<m;i++)
	{
		for(int j = 0;j<n;j++)
		{
			cin>>nums[i][j];
		}
	}
	
	// TABULATION APPROACH
// 	for(int i=0;i<m;i++)
// 	{
// 	    for(int j=0;j<n;j++)
// 	    {
// 	        if(i==0 && j==0)
// 	        {
// 	            dp[0][0] = nums[0][0];
// 	            continue;
// 	        }
// 	        int up = INT_MAX;
// 	        int left = INT_MAX;
// 	        if(i>0) up = dp[i-1][j];
// 	        if(j>0) left = dp[i][j-1];
// 	        dp[i][j] = nums[i][j] + min(up,left);
// 	    }
// 	}
	
	// SPACE OPTIMISED APPROACH
	vector<int> prev(n,0);
	for(int i=0;i<m;i++)
	{
	    vector<int> cur(n,0);
	    for(int j=0;j<n;j++)
	    {
	        if(i==0 && j==0)
	        {
	            cur[j] = nums[0][0];
	            continue;
	        }
	        int up = INT_MAX;
	        int left = INT_MAX;
	        if(i>0) up = prev[j];
	        if(j>0) left = cur[j-1];
	        cur[j] = nums[i][j] + min(up,left);
	    }
	    prev = cur;
	}
// 	cout<<min_Path_sum(m-1,n-1,nums,dp);
    cout<<prev[n-1]<<endl;
	// cout<<paths(m-1,n-1,dp);
	return 0;
}