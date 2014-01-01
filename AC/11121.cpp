#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int count=1;count<=t;count++)
    {
      int in;
      cin>>in;
      if(in==0)
      {
        cout<<"Case #"<<count<<": 0"<<endl;
        continue;
      }
      int i=0;
      char aa[100]={};
      bool base=false;//false->'-';true->'+'
      if(in<0)
      {
        base=false;
        in*=-1;
      }
      else base=true;
      while(in>0)
      {
        aa[i]=in%2+'0';
        in/=2;
        if(!base)in+=aa[i]-'0';
        i++;
        base=!base;
      }
      cout<<"Case #"<<count<<": ";
      for(int j=i-1;j>-1;j--)cout<<aa[j];
      cout<<endl;
    }
}
