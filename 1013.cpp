#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;
int isPrime(int n){
	int flag,i;
	flag =1;
	for (i = 2; i <=sqrt(n); ++i)
	{
		if (n%i==0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}

int main(int argc, char * argv[]){
	int M,N;
	cin>>M>>N;
	int cnt=0;
	int cnt2=0;
	for (int i = 2; ; ++i)
	{
		if (isPrime(i))
		{
			cnt++;
			if (cnt==N) 
			{
				cout<<i;
				break;
			} 
			if (cnt>=M && cnt<N)
			{	
				cnt2++;
				if (cnt2<=9)
				{
					cout<<i<<" ";
				}
				if (cnt2==10)
				{
					cout<<i<<endl;
					cnt2=0;
				}
			}	
		}
	}
	return 0;
}