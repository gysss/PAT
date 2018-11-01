#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int N;
	//在接收完N后要getchar()读取一下换行符才能用getline，
	//否则换行符会被读进getline中
	cin>>N;
	getchar();
	for(int j=0;j<N;j++){
		string s;
		//非空字符串，每个字符串以回车结束，但是字符串里面可能会有空格，
		//所以不能直接用cin，要用getline接收一行字符。
		getline(cin,s);
		if (s.length()>=6)
		{
			int invalid = 0,hasAlpha = 0,hasNum = 0;
			for (int i = 0; i < s.length(); ++i)
			{
				if (s[i]!='.' && !isalnum(s[i]))
					{
						invalid = 1;
					}
				else if (isalpha(s[i]))
				{
					hasAlpha = 1;
				}
				else if (isdigit(s[i]))
				{
					hasNum =1;
				}		
			}
			if (invalid ==1) cout<<"Your password is tai luan le."<<endl;
			else if (hasNum == 0) cout<<"Your password needs shu zi."<<endl;
			else if (hasAlpha == 0) cout<<"Your password needs zi mu."<<endl;
			else cout<<"Your password is wan mei."<<endl;
		}
		else cout<<"Your password is tai duan le."<<endl;
	}
	return 0;
}