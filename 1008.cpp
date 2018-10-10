#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int N,M;
    cin>>N>>M; //M可能大于N
    M = M % N;
    int a[N];
    for (int i = 0; i < N; ++i) cin>>a[i];
    for (int i = N-M; i < N; ++i) cout<<a[i]<<" ";
    for (int i = 0; i < (N-M-1); ++i) cout<<a[i]<<" ";
    cout<<a[N-M-1];
    return 0;
}