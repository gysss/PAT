#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;

int main(int argc, char * argv[]){
	string s;
	int sum=0;
	getline(cin,s);
	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i]>='A'&&s[i]<='Z')
		{
			sum+=s[i]-'A'+1;
		}
		else if (s[i]>='a'&&s[i]<='z')
		{
			sum+=s[i]-'a'+1;
		}
		else continue;
	}
	int numberOf0=0,numberOf1=0;
	while(sum!=0){
		if (sum%2==0)
		{
			numberOf0++;
			sum=sum/2;
		}
		else
		{
			numberOf1++;
			sum=sum/2;
		}
	}
	cout<<numberOf0<<" "<<numberOf1;
	return 0;
}