#include <iostream>
using namespace std;
int a,b;
int main()
{
    cin>>a;
    cin>>b;
    if(a==b){cout<<a<<" si"<<b<<"nu sunt prime intre ele.";}
    while (a!=b){
        if(a>b){a=a-b;}
        else {b=b-a;}
    }
    if(a==1){cout<<a<<" si"<<b<<"sunt prime intre ele.";}
    else {cout<<a<<" si"<<b<<"nu sunt prime intre ele.";}
    return 0;
}
