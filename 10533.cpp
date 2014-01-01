#include<iostream>
#include<cmath>
using namespace std;

int bitadd(int a)
{
  int count=0;
  while(a>0)
  {
    count+=a%10;
    a/=10;
  }
  return count;
}

bool isprime(int p,int* prime)
{
  if(p<2)return false;
  int sq=(int)sqrt((double)p)+1;
  bool isprime=true;
  for(int i=0;prime[i]<sq && i<4800;i++)
    if(p%prime[i]==0)
    {
      isprime=false;
      break;
    }
  return isprime;
}

int main()
{
    int prime[4800]={2,3,5,7,11,13,17};
    int p=7;
    for(int i=19;p<4800;i+=2)
    {
      for(int j=0;j<p;j++)
      {
        if(i%prime[j]==0)break;
        if(j==p-1)prime[p++]=i;
      }
    }
    int t;
    cin>>t;
    for(int t1=0;t1<t;t1++)
    {
      int a,b,count=0;
      cin>>a>>b;
      for(;a<b+1;a++)
      {
        bool bla=isprime(a,prime);
        if(!bla)continue;
        int team=bitadd(a);
        bla=isprime(team,prime);
        if(bla)count++;
      }
      cout<<count<<endl;
    }
}
