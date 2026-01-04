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
	int usb,ps2,usb_ps2;
	cin>>usb>>ps2>>usb_ps2;
	int choices;
	cin>>choices;
	vector<int> USB;
	vector<int> PS2;
	for(int i=0;i<choices;i++)
	{
		int x;
		string y;
		cin>>x>>y;
		if(y=="USB")
			USB.push_back(x);
		else PS2.push_back(x);
	}
	sort(USB.begin(),USB.end());
	sort(PS2.begin(),PS2.end());
	int i=0;
	int j=0;
	int price = 0;
	int computers = 0;
	vector<int> leftover;
	for(int k=0;k<usb && k<USB.size();k++)
	{
		price+=USB[k];
		computers++;
		i++;
	}
	for(;i<USB.size();i++)
		leftover.push_back(USB[i]);
	for(int k=0;k<ps2 && k<PS2.size();k++)
	{
		price+=PS2[k];
		computers++;
		j++;
	}
	for(;j<PS2.size();j++)
		leftover.push_back(PS2[j]);
	sort(leftover.begin(),leftover.end());
	i = 0;
	while(usb_ps2>0 && i<leftover.size())
	{
		price+=leftover[i];
		i++;
		usb_ps2--;
		computers++;
	}
	cout<<computers<<" "<<price<<endl;
	return 0;
}