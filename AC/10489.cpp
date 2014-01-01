#include<iostream>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    for(int ti=0;ti<t;ti++)
    {
      long long n,b,total=0;
      cin>>n>>b;
      for(int i=0;i<b;i++)
      {
        long long s,m,k=1;
        cin>>s;
        for(int j=0;j<s;j++)
        {
          cin>>m;
          m%=n;
          k=(k*m)%n;
        }
        total+=k;
        total%=n;
      }
      cout<<total<<endl;
    }
}
