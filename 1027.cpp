#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;

int main(int argc, char * argv[]){
	int N;
	char t;
	cin>>N>>t;
	int i=sqrt((N+1)/2);
	for (int j = 0;j<i;j++)
	{
		for (int n = 0; n < j; ++n)
		{
			cout<<"  ";
		}
		for (int m = 0; m < 2*i-1-2*j-1; ++m)
		{
			cout<<t<<" ";
		}
		cout<<t;
		for (int n = 0; n < j; ++n)
		{
			cout<<"  ";
		}
		cout<<endl;
	}
	for (int j = i-2; j >=0; j--)
	{	
		for (int n = 0; n < j; ++n)
		{
			cout<<"  ";
		}
		for (int m = 0; m < 2*i-1-2*j-1; ++m)
		{
			cout<<t<<" ";
		}
		cout<<t;
		for (int n = 0; n < j; ++n)
		{
			cout<<"  ";
		}
		cout<<endl;
	}
	cout<<N-(2*i*i-1)<<endl;
	return 0;
}