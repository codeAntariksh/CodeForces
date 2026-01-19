/* 
AUTHOR: Antarikshya Mitra
TIME: 
PROBLEM NO:- Marina and Vasya
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
const int MOD = 1e9 + 7; 



char put_diff(char &s1,char &s2) {
	string ABC = "abcdefghijklmnopqrstuvwxyz";
	for(int i=0;i<ABC.size();i++)
	{
		if(s1!=ABC[i] && s2!=ABC[i])
			return ABC[i];
	}
	return '1';
}


void solve(string &s1,string &s2,int t)
{
	int s1_same = s1.size()-t;
	int s2_same = s1.size()-t;
	int s1_diff = t;
	int s2_diff = t;
	// Edge Cases
	if(s1.size()==t)
	{
		for(int i=0;i<s1.size();i++)
			cout<<put_diff(s1[i],s2[i]);
		return;
	}
	// When t == 0
	if(t==0)
	{
		if(s1==s2) {
			cout<<s1;
		}
		else {
			cout<<-1;
		}
		return;
	}

	// O(n)
	vector<char> str(s1.size(),'A'); 
	for(int i=0;i<s1.size();i++)
	{
		if(s1[i]==s2[i]) {
			s1_same--;
			s2_same--;
			str[i] = s1[i];
		}
	}
	// Condition Check
	if(s1_same>s1_diff){
		cout<<-1<<endl;
		return;
	}
	else
	{
		int cnt = 0;
		for(int i=0;i<s1.size();i++)
		{
			if(str[i]!='A')
				continue;
			if(s1_same<=0 && s2_same<=0) {
				str[i] = put_diff(s1[i],s2[i]);
				s1_diff--;
				s2_diff--;
				continue;
			}
			// Counter even means picking s1 same s2 diff
			// Odd means picking s1 diff s2 same
			if(cnt%2==0)
			{
				cnt++;
				str[i]=s1[i];
				s1_same--;
				s2_diff--;
			}
			else
			{
				cnt++;
				str[i]=s2[i];
				s1_diff--;
				s2_same--;
			}
		}
		for(int i=0;i<str.size();i++)
			cout<<str[i]<<"";
		return;
	}
}

int32_t main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int n,t;
	cin>>n>>t;
	string s1,s2;
	cin>>s1>>s2;
	solve(s1,s2,t);
	return 0;
}