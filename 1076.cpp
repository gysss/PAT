#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    string s;
    while (cin>>s) {
        if (s.size()==3 && s[2]=='T') {
            cout<<s[0]-'A'+1;
        }
    }
    return 0;
}