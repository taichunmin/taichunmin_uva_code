#include<iostream>
using namespace std;

int main()
{
  char str[129];
  int sign[129],t;
  cin>>t;
  cin.get();
  for(int t1=0;t1<t;t1++)
  {
    cin.getline(str,129);
    for(int i=0;i<128;i++)sign[i]=0;
    int strl=strlen(str),flag=0;
    bool out=false;
    for(int i=0;i<strl;i++)
    {
      bool restart=false;
      if(str[i]=='(')sign[flag++]=1;
      else if(str[i]=='[')sign[flag++]=2;
      else if(str[i]==')')
      {
        if(flag>0 && sign[flag-1]==1)sign[--flag]=0;
        else restart=true;
      }
      else if(str[i]==']')
      {
        if(flag>0 && sign[flag-1]==2)sign[--flag]=0;
        else restart=true;
      }
      if(restart)
      {
        cout<<"No"<<endl;
        out=true;
        break;
      }
    }
    if(flag!=0 && out==false)
    {
      cout<<"No"<<endl;
      out=true;
    }
    if(!out)cout<<"Yes"<<endl;
  }
}
