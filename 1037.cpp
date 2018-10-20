#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;

int main(int argc, char * argv[]){
	int P_G,P_S,P_K,A_G,A_S,A_K;
	scanf("%d.%d.%d %d.%d.%d",&P_G,&P_S,&P_K,&A_G,&A_S,&A_K);
	int G_sum,A_sum;
	int g,s,k;
	G_sum = (P_G*17+P_S)*29+P_K;
	A_sum = (A_G*17+A_S)*29+A_K;
	if (A_sum>=G_sum)
	{
		int temp = A_sum-G_sum;
		g = temp/(17*29);
		s = temp%(17*29)/29;
		k = temp%29;
	}
	else
	{
		int temp = G_sum-A_sum;
		g = -temp/(17*29);
		s = temp%(17*29)/29;
		k = temp%29;	
	}
	printf("%d.%d.%d\n", g,s,k);
	return 0;
}