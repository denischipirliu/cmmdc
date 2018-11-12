#include <iostream>
using namespace std;
int a,b;
int main ()
{
    cin>>a;
    cin>>b;
    if(a==b){cout<<a;}
    while(a!=b)
    {if(a>b){a=a-b;}
    else {b=b-a;}
    }
    cout<<a;
    return 0;}
