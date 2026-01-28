/* 
AUTHOR: Antarikshya Mitra
TIME: 
PROBLEM NO:- Approximating a Constant Range 602 B
*/


#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

// void solve(vector<int> arr)
// {
// 	int n = arr.size();
// 	int len = -1;
// 	vector<int> pq(4,0); // (0)Max --> val, (2)Min --> val
// 	int l=0,r=0;
// 	pq[0] = arr[r];
// 	pq[2] = arr[r];
// 	pq[1] = 1;
// 	pq[3] = 1;
// 	r++; 
// 	len = 1;
// 	// A O(2N) Solution
// 	while(r<n)
// 	{
// 		int newMin = min(pq[2], arr[r]);
// 		int newMax = max(pq[0], arr[r]);
// 		if(newMax - newMin <= 1) 
// 		{
// 			// place(arr[r],pq);
// 			if(arr[r]==pq[0])
// 			{
// 				pq[1]++;
// 			}
// 			else pq[3]++;
// 			len = max(len,r-l+1);
// 			r++;
// 		}
// 		else
// 		{
// 			if(arr[r]>pq[2]) // New Maximum
// 			{
// 				while(pq[3]!=0)
// 				{
// 					if(arr[l]==pq[2])
// 					{
// 						pq[3]--;
// 					}
// 					if(arr[l]==pq[0])
// 						pq[1]--;
// 					l++;
// 				}
// 				// Moving Details of Maximum to Minimum
// 				pq[2] = pq[0];
// 				pq[3] = pq[1];
// 				pq[0] = arr[r];
// 				pq[1] = 1;
// 			}
// 			else
// 			{
// 				while(pq[1]!=0) // New Minimum
// 				{
// 					if(arr[l]==pq[2])
// 					{
// 						pq[3]--;
// 					}
// 					if(arr[l]==pq[0])
// 						pq[1]--;
// 					l++;
// 				}
// 				// Moving Details of Minimum to Maximum
// 				pq[0] = pq[2];
// 				pq[1] = pq[3];
// 				pq[2] = arr[r];
// 				pq[3] = 1;
// 			}			
// 		}
// 	}
// 	cout<<len<<endl;
// 	return;
// }

void solve(vector<int> &arr)
{
    int n = arr.size();
    map<int,int> freq;

    int l = 0;
    int ans = 0;

    for (int r = 0; r < n; r++)
    {
        freq[arr[r]]++;

        while (freq.rbegin()->first - freq.begin()->first > 1)
        {
            freq[arr[l]]--;
            if (freq[arr[l]] == 0)
                freq.erase(arr[l]);
            l++;
        }

        ans = max(ans, r - l + 1);
    }

    cout << ans << endl;
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