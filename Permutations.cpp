#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

int give_pos(vector<bool> &used,int &position)
{
	int n = used.size()-1;
	for(int i=1;i<=n;i++)
	{
		if(abs(i-position)<=1)
			continue;
		if(used[i])
			continue;
		else 
		{
			used[i] = true;
			return i;
		}
	}
	return -1;
}


void solve(int &n)
{
	if(n==1)
	{
		cout<<1<<endl;
		return;
	}
	if(n==2 || n==3)
	{
		cout<<"NO SOLUTION"<<endl;
		return;
	}
	vector<bool> used(n+1,false);
	used[0]=true;
	int check = 1;
	int pos = n-1;
	used[n-1]=true;
	vector<int> ans;
	while(check<=n)
	{
		ans.push_back(pos);
		pos = give_pos(used,pos);
		check++;
	}
	for(int &x:ans)
	{
		cout<<x<<" ";
	}
	return;
}

int32_t main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int n;
	cin>>n;
	solve(n);	
	return 0;
}