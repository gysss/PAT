#include <iostream>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;

int main(int argc, char * argv[]){
    string s;
    int a,reminder=0,quotient=0;
    int count=0;
    cin>>s>>a;
    if (s.length()==1 && (s[0]-'0')/a==0 ) {
        cout<<0<<" "<<s[0];
        return 0;
    }
    for (int i = 0; i < s.length(); ++i)
    {
        reminder=reminder*10+(s[i]-'0');
        if (reminder/a ==0 && count!=0) {
            cout<<0;
        }
        if (reminder/a != 0)
        {
            quotient = reminder/a;
            cout<<quotient;
            count++;
            reminder =reminder%a;
        }
    }
    cout<<" "<<reminder;
}
