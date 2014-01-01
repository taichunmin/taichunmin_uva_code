#include<iostream>
using namespace std;
int main()
{
  freopen("913i.txt","r",stdin);
  freopen("913.txt","w",stdout);
  int n;
  while(cin>>n)
  {
    long long sum=0,m=0;
    if(n==1){cout<<1<<endl;continue;}
    for(;n>0;n-=2)sum+=n;
    sum-=n;
    for(int i=0;i<3;i++)
    {
      int a=((2*sum)-1)+2*(n-i);
      m+=a;
    }
    cout<<m<<endl;
  }  
}      