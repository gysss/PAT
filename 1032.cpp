#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;

int main(int argc, char * argv[]){
    int N;
    cin>>N;
    getchar();
    int sumOfScore[N+1];
    for (int i=0; i<N+1; i++) {
        sumOfScore[i]=0;
    }
    for (int i = 0; i < N; ++i)
    {
        int number,score;
        cin>>number>>score;
        sumOfScore[number]+=score;
    }
    int max = 0,maxId=0;
    for (int i = 0; i < N+1; ++i)
    {
        if (sumOfScore[i]>max)
        {
            max=sumOfScore[i];
            maxId = i;
        }
    }
    cout<<maxId<<" "<<max;
    return 0;
}
