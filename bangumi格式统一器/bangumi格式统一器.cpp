#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
string s[10086];
int main()
{
	int cnt=0;
	while(1)
	{
		cin>>s[++cnt];
		if(s[cnt]=="done") break;
	}
	freopen("result1.txt","w",stdout);
	for(int i=1;i<=cnt-2;i++)
	{
		cout<<s[i]<<",";
	}
	cout<<s[cnt-1];
	freopen("result2.txt","w",stdout);
	for(int i=1;i<=cnt-2;i++)
	{
		cout<<s[i]<<"、";
	}
	cout<<s[cnt-1];
	freopen("CON","w",stdout);
	cout<<"写入完成啦A_A"; 
	return 0;
}
