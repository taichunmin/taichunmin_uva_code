#include<iostream>
using namespace std;

int main()
{
    freopen("913i.txt","r",stdin);
    freopen("913o.txt","w",stdout);
    long long a;
    while(cin>>a)
    {
      a=(a+1)/2;
      a*=a;
      cout<<(a-2)*6+3<<endl;
    }
}
