/* 
AUTHOR: Antarikshya Mitra
TIME: 
PROBLEM NO:- BITS 484A
*/


#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(int &l,int &r)
{
	int ans = l;
	for(int b = 62; b >=0; b--)
    {
        if((ans & (1LL << b)) == 0) // If Bit Not Set
        {
            int candidate = ans | ((1LL << b) - 1); //Set and Check if it lies in range
            if(candidate >= l && candidate <= r)
                ans = candidate;
        }
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
		int l,r;
		cin>>l>>r;
		solve(l,r);
	}	
	return 0;
}