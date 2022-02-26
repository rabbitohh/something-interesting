#include<iostream>
#include<cstdio>
#include<string> 
#include<bitset>
using namespace std;
int main()
{
	cout<<"Ö¸Áî£º\n±àÂë£º@bian\n½âÂë£º@jie\n";
	string s;
	while(1)
	{
		cin>>s;
		if(s=="@bian")
		{
			string pi="3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679821480865132823066470938446095505822317253594081284811174502841027019385211055596446229489549303819644288109756659334461284756482337867831652712019091456485669234603486104543266482133936072602491412737245870066063155881748815209209628292540917153643678925903600113305305488204665213841469519415116094";
			wstring s;
			wcin>>s;
			cout<<pi;
			int sz=s.size();
			for(int i=0;i<=sz-1;i++)
			{
				int o=(s[i]<<8)+s[i+1];
				if(!(i%2)) cout<<o;
			}
			cout<<endl;
		}
		else if(s=="@jie")
		{
			string s;
			cin>>s;
			int start=402;
			while(s[start+4])
			{
				int a=0;
				for(int i=start;i<start+5;i++)
				{
					a*=10;
						a+=(s[i]-'0');
				}
				int a1=a>>8;
				int a2=(a-(a1<<8));
				char ch[2]={a1,a2};	
				cout<<ch[0]<<ch[1];	
				start+=5;
			}
			cout<<endl;
		}
		else cout<<"err";
	}
	return 0;
}
