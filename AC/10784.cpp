#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t=0;
    long double a;
    while(cin>>a)
    {
      if(a==0)break;
      t++;
      cout<<"Case "<<t<<": "<<(long long)(5+sqrt(1+8*a))/2<<endl;
    }
}
