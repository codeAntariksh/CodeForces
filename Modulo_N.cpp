/* 
AUTHOR: Antarikshya Mitra
TIME: 
PROBLEM NO:- MODULO N
*/


#include<bits/stdc++.h>
#include <numeric>
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
		vector<int> coprimes;
		for(int k=1;k<n;++k)
		{
			if(__gcd(k,n)==1) {
				coprimes.push_back(k);
			}
		}
		int product = 1;
		for(int num:coprimes) {
			product = (product*num) % n;
		}
		vector<int> result;
		if(product==1) {
			result = coprimes;
		}
		else
		{
			for(int num:coprimes) {
				if(num != product) {
					result.push_back(num);
				}
			}
		}
		cout<<result.size()<<endl;
		for(int num: result) {
			cout<<num<<' ';
		}
		cout<<endl;
	return 0;
}