#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 


const int MAXN = 1e6 + 5;
int spf[MAXN];

void build_spf() {
    for (int i = 1; i < MAXN; i++)
        spf[i] = i;

    for (int i = 2; i * i < MAXN; i++) {
        if (spf[i] == i) {           // prime
            for (int j = i * i; j < MAXN; j += i) {
                if (spf[j] == j)
                    spf[j] = i;     // smallest divisor
            }
        }
    }
}
int min_divisor(int x) {
    if (x <= 1) return -1;  // undefined
    return spf[x];          // smallest divisor (>1)
}

bool possible(vector<int> &arr,int mid)
{
    int n = arr.size();
    int rem = arr[0]%mid;
    for(int i = 1;i<n;i++)
    {
        int val = arr[i] - rem;
        if (val <= 1) return false;
        int smallest = min_divisor(val);

        if((arr[i]-rem)/smallest < mid) return false;
    }
    return true;
}
void solve(vector<int> &arr)
{
    sort(arr.begin(),arr.end());
    int low = arr[0];
    int high = arr[1];
    int ans = -1;
    while(low<=high)
    {
        int mid = low + (high-low)/2;
        if(possible(arr,mid))
        {
            ans = mid;
            low = mid+1;
        }
        else
            high = mid-1;
    }
    cout<<ans<<endl;
}
int32_t main()
{
   ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    build_spf();
    int t=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr(n);
        for (auto &a:arr) 
            cin>>a;
        solve(arr);
    }   
    return 0;
}

