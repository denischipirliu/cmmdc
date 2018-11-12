#include <iostream>

using namespace std;
int main()
{
        int n,d,b=2,i=0,j=0;
        cin>>n;

   while (i<n)
        {
                d=2;
                j=0;
                while( (d<b)  )
                {
                   if (b%d == 0)
                                j++;
                   d++;
                }
                if (j == 0)
                {
                   cout<<b<<" ";
                   i++;

                }
                b++;

        }
return 0;
}
