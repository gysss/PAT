#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b;
	cin>>a>>b;
	int n = ((b-a)+50)/100; //四舍五入到秒
	int hour = n/3600;
	n=n%3600;
	int minute = n/60,second = n%60;
	printf("%02d:%02d:%02d\n",hour,minute,second);
	return 0;
}