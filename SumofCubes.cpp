/* 
AUTHOR: Antarikshya Mitra
TIME: 
PROBLEM NO:- Sum of Cubes Div3 C
*/


#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 


void solve(int n) {
    int a = 1;
    int b = 1;
    // Find max b such that b^3 <= n
    while ((b+1)*(b+1)*(b+1) <= n) b++;

    while (a <= b) {
        int sum = a*a*a + b*b*b;
        if (sum == n) {
            cout << "YES" << endl;
            return;
        } else if (sum < n) {
            a++;
        } else {
            b--;
        }
    }
    cout << "NO" << endl;
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
		solve(n);
	}	
	return 0;
}