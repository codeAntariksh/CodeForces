/* 
AUTHOR: Antarikshya Mitra
TIME: 
PROBLEM NO:- Gray Code CSES
*/


#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

int32_t main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int n;
	cin>>n;
	int limit = (1LL << n) - 1;
	vector<int> arr(n,0);
	for(int i=0;i<n;i++)
		cout<<0;
	cout<<endl;
	for(int i = 0;i < limit;i++)
	{
		for(int j=n-1;j >= 0;j--)
		{
			if(arr[j]==1) {
				arr[j] = 0;
				continue;
			}
			else
			{
				arr[j] = 1;
				break;
			}
		}
		cout<<arr[0];
		// To Gray Code
		for(int k=1;k<n;k++)
		{
			cout<<(arr[k-1]^arr[k]);
		}
		cout<<endl;
	}
	return 0;
}