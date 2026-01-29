/* 
AUTHOR: Antarikshya Mitra
TIME: 
PROBLEM NO:- Frodo and Pillows Venture Cup DIV 2 B
*/


#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 


// 1 2 1 1
// 1 -->2 3 4 5 6


// bool isPossible(int &mid,int &n,int &m,int &k)
// {
//     int pillow = m - mid;
//     if(pillow < 0) return false;
//     int cnt = mid - 1;
//     // Left side ghure elam
//     for(int i=k-1;i>=1;i--)
//     {
//         if(cnt>0)
//             pillow -= cnt--;
//         else
//             pillow -= 1;
//         if(pillow<0) return false;
//     }
//     cnt=mid-1;
//     // Right side ghure elam
//     for(int i=k+1;i<=n;i++)
//     {
//         if(cnt>0)
//             pillow-=cnt--;
//         else
//             pillow-=1;

//         if(pillow<0) return false;
//     }
//     return true;
// }


bool isPossible(long long mid, long long n, long long m, long long k)
{
    int L = k - 1;
    int R = n - k;
    int total = mid;

    // Left side
    if (mid > L)
        total += L * (2*mid - L - 1) / 2;
    else
        total += (mid-1)*mid/2 + (L - (mid-1));

    // Right side
    if (mid > R)
        total += R * (2*mid - R - 1) / 2;
    else
        total += (mid-1)*mid/2 + (R - (mid-1));

    return total <= m;
}



void solve(int &n,int &m,int &k)
{
	int low = 1;
	int high = m;
	int ans = 0;
	while(low<=high)
	{
		int mid = low + (high - low)/2;
		if(isPossible(mid,n,m,k))
			{
				ans = mid;
				low = mid + 1;
			}
		else
			high = mid - 1;
	}
	cout<<ans<<endl;
	return;
}

int32_t main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int n,m,k;
	cin>>n>>m>>k;
	solve(n,m,k);
	return 0;
}