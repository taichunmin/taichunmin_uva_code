#include<iostream>
using namespace std;
int main()
{
  char ch[21];
  while(cin.getline(ch,21))
  {
    if(ch[0]=='-')break;
    int strl=strlen(ch);
    if(ch[0]=='0')
    {
      if(ch[1]!='x')
      {
        cout<<"0x0"<<endl;
        continue;
      }
      long long d=0,e=1;
      for(int i=strl-1;i>=2;i--)
      {
        if(ch[i]>='0' && ch[i]<='9')d+=(ch[i]-48)*e;
        else d+=(ch[i]-'A'+10)*e;
        e*=16;
      }
      cout<<d<<endl;
    }
    else
    {
      long long a=0,b=1;
      for(int i=strl-1;i>=0;i--)
      {
        a+=(ch[i]-'0')*b;
        b*=10;
      }
      for(int i=0;i<strl;i++)ch[i]='^';
      for(int i=strl-1;i>=0 && a>0;i--)
      {
        if(a%16<=9)ch[i]=48+a%16;
        else ch[i]='A'-10+a%16;
        a/=16;
      }
      for(int i=0;i<strl;i++)
      {
        if(ch[i]=='^')continue;
        else cout<<"0x"<<(char*)(&ch[i])<<endl;
        break;
      }
    }
  }
}
