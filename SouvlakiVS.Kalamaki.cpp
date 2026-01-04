#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(vector<int> &arr)
{
	int n = arr.size();
	sort(arr.begin(),arr.end());
	int round = 1;
	int i = 0;
	while (round <= n - 1 && i <= n - 2)
    {
        if (round % 2 == 0)
        {
            if (arr[i] < arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                cout << "NO" << endl;
                return;
            }
        }
        round++;
        i++;
    }
	cout<<"YES"<<endl;
	return;
}

int32_t main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int t=1;
	cin>>t;
	while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &x : arr)
            cin >> x;
        solve(arr);
    }
	return 0;
}