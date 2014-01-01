#include<iostream>
#include<cmath>
using namespace std;

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
    while(cin>>p)
    {
      if(p==1)
      {
        cout<<"1 is not prime."<<endl;
        continue;
      }
      if(p%2==0)//¥ý¹LÂo°¸¼Æ
      {
        if(p==2)cout<<"2 is prime."<<endl;
        else cout<<p<<" is not prime."<<endl;
        continue;
      }
      int sq=(int)sqrt((double)p)+1;
      bool isprime=true; 
      for(int i=0;prime[i]<sq && i<4800;i++)
        if(p%prime[i]==0)
        {
          cout<<p<<" is not prime."<<endl; 
          isprime=false;
          break;
        }
      if(isprime)
      {
        int k=0,newp=p;
        bool isemirp=true;
        while(newp>0)
        {
          k*=10;
          k+=newp%10;
          newp/=10;
        }
        if(k%2==0 || k==p)
        {
          cout<<p<<" is prime."<<endl;
          continue;
        }
        sq=(int)sqrt((double)k)+1;
        for(int i=1;prime[i]<sq;i++)
        {
          if(k%prime[i]==0)
          {
            cout<<p<<" is prime."<<endl;
            isemirp=false;
            break;
          }
        }
        if(isemirp)
          cout<<p<<" is emirp."<<endl;
      }
    }
}
//sqrt(2^31-1)=46341,4800
