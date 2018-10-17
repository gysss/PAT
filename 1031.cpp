#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int N;
	cin>>N;
	getchar();
	int isAllPassed = 1;
	int pow[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char M[]={1,0,'X',9,8,7,6,5,4,3,2};
	for (int i = 0; i < N; ++i)
	{
		string s;
		int sum=0;
		getline(cin,s);
		for (int j = 0; j < s.length()-1; ++j)
		{
			sum +=(s[j]-'0')*pow[j];
		}
		int Z = sum%11;
		if (M[Z]!=s[s.length()-1])
		{
			cout<<s<<endl;
			isAllPassed = 0;
		}
	}
	if (isAllPassed == 1)
	{
		cout<<"All passed"<<endl;
	}
	return 0;
}