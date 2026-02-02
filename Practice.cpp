// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int no_of_Sub(int index,int target,vector<int> &arr,vector<vector<int>> &dp)
{
    if(index==arr.size())
    {
       if(target == 0)
            return 1;
        else 
            return 0;
    }
    if(dp[index][target]!=-1) return dp[index][target];
    int nontake = no_of_Sub(index+1,target,arr,dp);
    int take = 0;
    if(target>=arr[index])
        take = no_of_Sub(index+1,target-arr[index],arr,dp);
    return dp[index][target] = take + nontake;
}

// Overlapping Subproblems
// 1 2 3 4 5
// 4         
// 5         

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, target;
    cin >> n >> target;

    vector<int> arr(n);
    for(int &a : arr)
        cin >> a;

    // dp[i][k] = number of subsequences using first i elements with sum k
    vector<vector<int>> dp(n+1, vector<int>(target+1, 0));

    // Base case
    dp[0][0] = 1;

    for(int i = 1; i <= n; i++)
    {
        for(int k = 0; k <= target; k++)
        {
            int nontake = dp[i-1][k];
            int take = 0;

            if(arr[i-1] <= k)
                take = dp[i-1][k - arr[i-1]];

            dp[i][k] = take + nontake;
        }
    }

    cout << dp[n][target];
    return 0;
}
