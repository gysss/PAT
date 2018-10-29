#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;

int main(int argc, char * argv[]){
    int groupNumber,fullScore;
    cin>>groupNumber>>fullScore;
    int a[groupNumber];
    for (int j = 0; j < groupNumber; ++j)
    {
        for (int n=0; n<groupNumber; n++)
        {
            cin>>a[n];
        }
        int count=0,max=-1,min=51,sum=0;
        float  average;
        for (int i = 1; i < groupNumber; ++i)
        {
            if (a[i]>=0 && a[i]<=fullScore)
            {
                count++;
                if (max<a[i])
                {
                    max = a[i];
                }
                if (min>a[i])
                {
                    min = a[i];
                }
                sum=sum+a[i];
            }
        }
        sum = sum-max-min;
        average = (float)sum/(count-2);
        average = (average+ a[0])/2;
        cout<<int(average+0.5)<<endl; //四舍五入取整
    }
    return 0;
}
