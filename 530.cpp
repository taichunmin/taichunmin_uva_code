#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long n,m,c=1,d;
    while(cin>>n>>m)
    {
      if(m==0 || n==m)
      {
        cout<<"1"<<endl;
        continue;
      }
      bool q[m];
      for(int y=1;y<m;y++) q[y]=true;
      for(long long t=0;t<m;t++)
      {
        d=(n-t);
        for(int p=2;p<=m;p++)
          if(q[p-1]==1 && d%p==0)
          {
            d/=p;
            q[p-1]=0;
          }
        c*=d;
        for(int p=2;p<=m;p++)
          if(c%p==0 && q[p-1]==1)
          {
            c/=p;
            q[p-1]=0;
          }
      }
      cout<<c<<endl;
      c=1;
    }
}
