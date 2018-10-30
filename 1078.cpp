#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;

int main(int argc, char * argv[]){
	char model;
	cin>>model;
	getchar(); //读取回车
	string s;
	getline(cin,s);
	if (model == 'C') //压缩
	{
		for (int i = 0; i < s.size(); ++i)
		{
			int count=1;
			for (int j = i+1; j<s.size(); ++j)
			{
				if (s[j]==s[i])
				{
					count++;
					i=j;
					continue;
				}
				else break;
			}
			if (count == 1) cout<<s[i];
			else cout<<count<<s[i];
		}
	}
	else	//解压
	{
		int cnt=0;
		for (int i = 0; i < s.size(); ++i)
		{
			if (s[i]>='0' && s[i]<='9')
			{
				cnt = cnt*10+(s[i]-'0');
			}
			else
			{
				if (cnt!=0)
				{
					for (int j = 0; j < cnt; ++j)
					{
						cout<<s[i];
					}
					cnt = 0;
				}
				else{
					cout<<s[i];
				}
			}
		}
	}
	return 0;
}