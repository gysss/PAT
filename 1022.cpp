#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char * argv[]){
    long A,B;
    int D;
    cin>>A>>B>>D;
    vector<int> v1;
    long sum = A+B;
    if (sum==0) {
        cout<<sum;
        return 0;
    }
    while(sum>0){
        int i = sum%D;
        v1.insert(v1.begin(),i);
        sum=sum/D;
    }
    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) //迭代器访问元素
    {
        cout << *it;
    }
    return 0;
}
