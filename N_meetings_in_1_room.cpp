#include<bits/stdc++.h>
using namespace std;
class Data {
public:
	int start;
	int end;
	int pos;
};
bool func(Data val1,Data val2){
	return val1.end<val2.end;
}
int main()
{
	int N;
	cin>>N;
	vector<int> start(N);
	for(auto &x:start)
	{
		cin>>x;
	}
	vector<int> end(N);
	for(auto &x:end)
	{
		cin>>x;
	}
	Data arr[N];
	for(int i=0;i<N;i++)
	{
		arr[i].start=start[i];
		arr[i].end=end[i];
		arr[i].pos=i+1;
	}
	sort(arr,arr+N,func);
	int ct=1;
	vector<int> position;
	int freetime=arr[0].end;
	position.push_back(arr[0].pos);
	for(int i=1;i<N;i++)
	{
		if(arr[i].start>=freetime)
		{
			ct++;
			freetime=arr[i].end;
			position.push_back(arr[i].pos);
		}
	}
	cout<<ct<<endl;
	for(auto &x:position){
		cout<<x<<" ";
	}
	return 0;
}