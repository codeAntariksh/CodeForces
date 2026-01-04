#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

bool possible(double mid,double c)
{
	
	return (mid*mid + pow(mid,0.5) - c <= 1e-6);
}

void solve(double c)
{
	double low = 0;
	double high = pow(c,0.5);
	while(high-low>1e-6)
	{
		double mid = low+(high-low)/2;
		if(possible(mid,c))
		{
			low = mid;
		}
		else
			high = mid;
	}
	cout<<fixed<<setprecision(15)<<low<<endl;
}

int32_t main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	double c;
	cin>>c;
	solve(c);	
	return 0;
}