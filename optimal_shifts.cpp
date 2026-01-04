#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(string &s)
{
	int n = s.size();
	int maximum = 0;
	int check = 0;
	if(s[n-1]=='1') //O(N) Approach
	{
		
		for(int i=n-1;i>=0;i--)
		{
			if(s[i]=='1')
			{
				check = 0;
			}
			else
			{
				check++;
				maximum = max(maximum,check);
			}
		}
		cout<<maximum<<endl;
	}
	else // O(2N) Approach
	{
		int locate;
		for(int i = n-2;i>=0;i--)
		{
			if(s[i]=='1')
			{
				locate = i;
				break;
			}
		}
		int i = (locate - 1 + n) % n;
		while(i!=locate)
		{
			if(s[i]=='1')
			{
				check = 0;
			}
			else
			{
				check++;
				maximum = max(maximum,check);
			}
			i--;
			if(i<0)
				if (i < 0) i = n - 1;
		}
		cout<<maximum<<endl;
	}
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
		int n;
		cin>>n;
		string s;
		cin>>s;
		solve(s);
	}	
	return 0;
}