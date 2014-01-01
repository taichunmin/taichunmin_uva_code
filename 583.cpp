#include<iostream>
using namespace std;

int p[1000000]={};

int main()
{
    p[0]=2,p[1]=3,p[2]=5,p[3]=7,p[4]=11,p[5]=13,p[6]=17;
    int flagp=7;
    for(int i=18;i<=2147483647;i++)
    {
      bool isprime=true;
      for(int j=0;j<flagp;j++)
        if(i%p[j]==0)
        {
          isprime=false;
          break;
        }
      if(isprime)
      {
        p[flagp]=i;
        flagp++;
      }
    }
    //cout<<"Produce prime finish!"<<endl;
    int a;
    while(cin>>a)
    {
      if(a==0)break;
      cout<<a<<" = ";
      bool firstout=true;
      if(a<0)
      {
        cout<<"-1";
        a*=-1;
        firstout=false;
      }
      for(int i=0;i<flagp;i++)
      {
        if(a>0)
        {
          if(a%p[i]==0)
          {
            if(!firstout)cout<<" x ";
            else firstout=false;
            cout<<p[i];
            a/=p[i];
            i--;
          }
        }
        else break;
      }
      cout<<endl;
    }
}
