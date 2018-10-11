#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;

int main(int argc, char * argv[]){
	int N;
	cin>>N;
	int toDealNumber[N];
	for (int i = 0; i < N; ++i)
	{
		cin>>toDealNumber[i];
	}
	int a[N];
	int A1sum=0,A2sum=0,count=0,A4sum=0,num=0,max=0;
	int isA1 = 0 ,isA2 = 0,isA3 = 0,isA4 = 0,isA5=0;
	for (int i = 0; i < N; ++i)
	{
		static int j =1;
		a[i] = toDealNumber[i]%5;
		if (a[i]==0 && toDealNumber[i]%2==0)
		{
			A1sum+=toDealNumber[i];
			isA1 = 1;
		}
		if (a[i]==1)
		{
			A2sum += j*toDealNumber[i];
			j=-1*j; 
			isA2 = 1;
		}
		if (a[i]==2)
		{
			count++;
			isA3 =1;
		}
		if (a[i]==3)
		{
			A4sum+=toDealNumber[i];
			num++;
			isA4 = 1;
		}
		if (a[i]==4 && toDealNumber[i]>max)
		{
			max = toDealNumber[i];
			isA5 = 1;
		}

	}
	if (isA1==0) cout<<"N"<<" ";
	else cout<<A1sum<<" ";

	if (isA2==0) cout<<"N"<<" ";
	else cout<<A2sum<<" ";

	if(isA3==0) cout<<"N"<<" ";
	else cout<<count<<" ";

	if(isA4==0) cout<<"N"<<" ";
	else printf("%.1f ",(float)A4sum/num);

	if(isA5==0) cout<<"N";
	else cout<<max;

	return 0;
}