#include<iostream>
using namespace std;
int main(){
    int n,jia=0,yi=0,jiahan,jiahua,yihan,yihua;
    cin>>n;
    for (int i=0; i<n; i++) {
        cin>>jiahan>>jiahua>>yihan>>yihua;
        if (jiahua==jiahan+yihan && yihua!=jiahan+yihan) {
            yi++;
        }
        if (jiahua!=jiahan+yihan && yihua==jiahan+yihan) {
            jia++;
        }
    }
    cout<<jia<<" "<<yi;
}