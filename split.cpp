#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(vector<int> &arr)
{
	int n = arr.size();
	unordered_map<int,int> mpp;
	for(auto &x:arr)
	{
		mpp[x]++;
	}
	int ans=0;
	int l_sz=n/2,r_sz=n/2;
	int flag = 1;// signifying 1 --> Odd odd, 0--> even even else -1 for odd even
	for(auto it:mpp)
	{
		int freq = it.second;
		int a,b;
		if(freq%2==1)
		{
			if(max(l_sz,r_sz)>freq/2)
			{
				a = freq/2;
				b=a+1;
				flag = -1;
			}
			else
			{
				a = max(l_sz,r_sz);
				b = l_sz+r_sz-max(l_sz,r_sz);
				if(a%2==1 && b%2==1)
					flag = 1;
				else if(a%2==0 && b%2==0)
					flag = 0;
				else flag = -1;
			}
		}
		else
		{
			if(max(l_sz,r_sz)>freq/2)
			{
				a = freq/2-1;
				b = freq/2+1;
				flag = 1;
			}
			else
			{
				a = max(l_sz,r_sz);
				b = l_sz+r_sz-max(l_sz,r_sz);
				if(a%2==1 && b%2==1)
					flag = 1;
				else if(a%2==0 && b%2==0)
					flag = 0;
				else flag = -1;
			}
			
		}
		if(l_sz>r_sz)
		{
			l_sz = l_sz - max(a,b);
			r_sz = r_sz - (a+b-max(a,b));
		}
		else 
		{
			r_sz = r_sz - max(a,b);
			l_sz = l_sz - (a+b-max(a,b));	
		}
		if(flag==1)
		{
			ans+=2;
		}
		else if(flag==0)
			ans+=0;
		else ans+=1;
		flag = 1;
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
		int n;
		cin>>n;
		n*=2;
		vector<int> arr(n);
		for (auto &a:arr) 
			cin>>a;
		solve(arr);
	}	
	return 0;
}