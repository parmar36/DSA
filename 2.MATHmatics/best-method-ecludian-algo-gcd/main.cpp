#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    else 
     return gcd(b,a%b);
}

int main()
{
   int res=gcd(12,18);
   cout<<res;
   return 0; 
}
