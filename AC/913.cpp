#include<iostream>
using namespace std;

int main()
{
    long long a;
    while(cin>>a)
    {
      a=(a+1)/2;
      a*=a;
      cout<<(a-2)*6+3<<endl;
    }
}
