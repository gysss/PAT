#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int m,n,a,b,q,temp;
	scanf("%d%d%d%d%d",&m,&n,&a,&b,&q);
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			scanf("%d",&temp);
			if (temp>=a && temp<=b)
			{
				temp = q;
			}
			if (j!=0)
			{
				printf(" ");
			}
			printf("%03d", temp);
		}
		printf("\n");
	}
	return 0;
}