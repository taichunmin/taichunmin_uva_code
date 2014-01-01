#include<iostream>
using namespace std;

int main()
{
    int base1,base2;
    char show[17]={"0123456789ABCDEF"};
    while(cin>>base1>>base2)
    {
      char aa[20];
      cin>>aa;
      bool illegal=false;
      int aalen=strlen(aa);
      for(int i=0;i<aalen && base1<16;i++)
        for(int j=0;j<16;j++)
          if(aa[i]==show[j] && j>=base1)
          {
            illegal=true;
            i=aalen;
            j=16;
            break;
          }
      bool start=false;
      for(int i=0;i<aalen;i++)
        if(start || (aa[i]<='9' && aa[i]>'0') || (aa[i]>='A' && aa[i]<='F'))
        {
          cout<<aa[i];
          start=true;
        }
      if(!start)cout<<'0';
      if(illegal)
      {
        cout<<" is an illegal base "<<base1<<" number"<<endl;
        continue;
      }
      cout<<" base "<<base1<<" = ";
      long long mid=0;
      for(int i=0;i<aalen;i++)
      {
        mid*=base1;
        for(int j=0;j<16;j++)
          if(aa[i]==show[j])mid+=j;
      }
      int bblen=0;
      char bb[101]={};
      if(mid==0)
      {
        bb[0]='0';
        bblen=1;
      }
      while(mid>0)
      {
        bb[bblen]=mid%base2+'0';
        mid/=base2;
        bblen++;
      }
      for(int i=bblen-1;i>-1;i--)cout<<bb[i];
      cout<<" base "<<base2<<endl;
    }
}
