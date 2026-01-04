#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(vector<int> &n,vector<int> &m,vector<int> &c)
{
	multimap<int,int> mpp;
	int kill=0;
	for(int i=0;i<m.size();i++)
	{
		mpp.insert({c[i], m[i]});
	}
	sort(n.begin(),n.end());
	int maxi = n.size()-1;
	for(auto it=mpp.rbegin(); it!=mpp.rend();++it) 
	{
    	if(it->first>n[maxi] && it->second<=n[maxi]) 
    	{
        	n[maxi] = it->first;
        	mpp.erase(next(it).base());
        	kill++;
       	 	break;
    	}
		if(it->first==0) break;
	}
	for(auto rit=mpp.rbegin();rit!=mpp.rend();)
	{
		if(rit->second<=n[maxi] && rit->first!=0)
		{
			kill++;
			rit = decltype(rit)(mpp.erase(next(rit).base()));
		}
		else ++rit;
	}
	// Loop lagabo minimum niye max ke counter korbo
	int i = 0;
	while(i<n.size() && !mpp.empty())
	{
		bool erased = false;
		for(auto rit=mpp.rbegin();rit!=mpp.rend();++rit)
		{
			if(rit->second<=n[i])
			{
				rit = decltype(rit)(mpp.erase(next(rit).base()));
				n.erase(n.begin()+i,n.begin()+i+1);
				i=0;
				erased = true;
				kill++;
				break;
			}
		}
		if(!erased) i++;
	}
	cout<<kill<<endl;
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
		int nn,mm;
		cin>>nn>>mm;
		vector<int> n(nn);
		vector<int> m(mm);
		vector<int> c(mm);
		for (auto &a:n) 
			cin>>a;
		for (auto &a:m) 
			cin>>a;
		for (auto &a:c) 
			cin>>a;
		solve(n,m,c);
	}	
	return 0;
}