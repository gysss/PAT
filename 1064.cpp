#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>
#include <set>
using namespace std;

//在接收输入数据的时候就把该数字的每一位相加，
//并把结果插入一个set集合中。因为set是有序的、不重复的，
//所以set的size值就是输出的个数，set中的每一个数字即所有答案的数字序列

int getFriendNum(int num){
	int sum = 0;
	while(num!=0){
		sum+=num%10;
		num/=10;
	}
	return sum;
}
int main(int argc, char const *argv[])
{
	set<int> s;
	int n,num;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&num);
		s.insert(getFriendNum(num));
	}
	printf("%d\n",s.size());
	for (auto it = s.begin(); it!=s.end();it++)
	{
		if(it != s.begin()) printf(" ");
		printf("%d", *it);
	}
	return 0;
}