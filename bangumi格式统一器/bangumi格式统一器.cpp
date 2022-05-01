#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
wstring s[10086];
int main()
{
	int cnt=0;
	while(1)
	{
		wcin>>s[++cnt];
		if(s[cnt]==L"done") break;
	}
	freopen("result1.txt","w",stdout);
	for(int i=1;i<=cnt-2;i++)
	{
		wcout<<s[i]<<",";
	}
	wcout<<s[cnt-1];
	freopen("result2.txt","w",stdout);
	for(int i=1;i<=cnt-2;i++)
	{
		wcout<<s[i]<<"¡¢";
	}
	wcout<<s[cnt-1];
	freopen("CON","w",stdout);
	cout<<"Ð´ÈëÍê³ÉÀ²A_A"; 
	return 0;
}

