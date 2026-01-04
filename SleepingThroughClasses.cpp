#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 

void solve(string &st,int &k)
{
    int n = st.size();
    int sleep = 0;
    int ptr = 0;
    int forced = -1;   
    while(ptr < n)
    {
        if(st[ptr] == '1')
        {
            forced = ptr + k;  
            ptr++;            
        }
        else
        {
            if(ptr > forced)
                sleep++;
            ptr++;   
        }
    }
    cout << sleep << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string st;
        cin >> st;
        solve(st, k);
    }
    return 0;
}
