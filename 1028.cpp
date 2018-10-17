#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;
typedef struct People
{
    string name;
    int year,month,day;
}people;

int main(int argc, char * argv[]){
    int N;
    cin>>N;
    getchar();
    people p[N];
    for (int i = 0; i < N; ++i)
    {
        cin>>p[i].name;
        scanf("%d/%d/%d",&p[i].year,&p[i].month,&p[i].day);
    }
    int count=0;
    people max;
    max.year = 0;max.month = 0;max.day = 0;
    people min;
    min.year = 9999;min.month = 9999;min.day = 9999;
    for (int i = 0; i < N; ++i)
    {
        if ((p[i].year<2014 || (p[i].year==2014 && p[i].month<9) || (p[i].year==2014 && p[i].month==9 && p[i].day<=6))
            && (p[i].year>1814 ||(p[i].year == 1814 && p[i].month>9) ||(p[i].year==1814 && p[i].month == 9 && p[i].day >=6 )))
        {
            count++;
            if (p[i].year>max.year || (p[i].year==max.year && p[i].month>max.month) ||(p[i].year == max.year && p[i].month==max.month && p[i].day>max.day))
            {
                max.year=p[i].year;
                max.month = p[i].month;
                max.day = p[i].day;
                max.name = p[i].name;
            }
            if (p[i].year<min.year || (p[i].year==min.year && p[i].month<min.month) ||(p[i].year == min.year && p[i].month==min.month && p[i].day<min.day))
            {
                min.year=p[i].year;
                min.month = p[i].month;
                min.day = p[i].day;
                min.name = p[i].name;
            }
        }
    }
    cout<<count;
    if (count!=0)
    {
        cout<<" "<<min.name<<" "<<max.name;
    }
    return 0;
}
