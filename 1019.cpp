#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;
int riseSort(int num){
	int a[4],min,temp;
	a[0] = num/1000;
	a[1] = num%1000/100;
	a[2] = num%100/10;
	a[3] = num%10;
	for (int i = 0; i < 3; ++i)
	{
		min = i;
		for (int j = i+1; j < 4; ++j)
		{
			if (a[min]>a[j])
			{
				min = j;
			}
		}#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;
int riseSort(int num){
    int a[4],min,temp;
    a[0] = num/1000;
    a[1] = num%1000/100;
    a[2] = num%100/10;
    a[3] = num%10;
    for (int i = 0; i < 3; ++i)
    {
        min = i;
        for (int j = i+1; j < 4; ++j)
        {
            if (a[min]>a[j])
            {
                min = j;
            }
        }
        if (min!=i)
        {
            temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
        
    }
    num = a[0]*1000+a[1]*100+a[2]*10+a[3];
    return num;
}
int declineSort(int num){
    int a[4],max,temp;
    a[0] = num/1000;
    a[1] = num%1000/100;
    a[2] = num%100/10;
    a[3] = num%10;
    for (int i = 0; i < 3; ++i)
    {
        max = i;
        for (int j = i+1; j < 4; ++j)
        {
            if (a[max]<a[j])
            {
                max = j;
            }
        }
        if (max!=i)
        {
            temp = a[max];
            a[max] = a[i];
            a[i] = temp;
        }
    }
    num = a[0]*1000+a[1]*100+a[2]*10+a[3];
    return num;
}

int main(int argc, char * argv[]){
    int num;
    cin>>num;
    int m = riseSort(num);
    int n = declineSort(num);
    if (m==n) {
        cout<<n<<" - "<<m<<" = "<<"0000"<<endl;
        return 0;
    }
    do {
        num=n-m;
        printf("%04d - %04d = %04d\n",n,m,num);
        m = riseSort(num);
        n = declineSort(num);
    } while (num!=6174);
    return 0;
}

		if (min!=i)
		{
			temp = a[min];
			a[min] = a[i];
			a[i] = temp;
		}

	}
	num = a[0]*1000+a[1]*100+a[2]*10+a[3];
	return num;
}
int declineSort(int num){
	int a[4],max,temp;
	a[0] = num/1000;
	a[1] = num%1000/100;
	a[2] = num%100/10;
	a[3] = num%10;
	for (int i = 0; i < 3; ++i)
	{
		max = i;
		for (int j = 1; j < 4; ++j)
		{
			if (a[max]<a[j])
			{
				max = j;
			}
		}
		if (max!=i)		
		{
			temp = a[max];
			a[max] = a[i];
			a[i] = temp;
		}
	}
	num = a[0]*1000+a[1]*100+a[2]*10+a[3];
	return num;
}
int main(int argc, char * argv[]){
	int num;
	cin>>num;
	while(num!=6174){
		int m = riseSort(num);
		int n = declineSort(num);
		num=n-m;
		cout<<n<<" - "<<m<<" = "<<num<<endl;
	}
	return 0;
}