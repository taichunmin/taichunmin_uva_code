#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int main()
{
  int t1,ia[26];
  char ch[500],ca;
  stringstream ss;
  while(cin>>t1)
  {
    cin.get();
    for(int i=0;i<26;i++)ia[i]=0;
    for(int i=0;i<t1;i++)
    {
      ss.clear();
      cin.getline(ch,500);
      ss<<ch;
      while(ss>>ca)
        if( ('A'<=ca && ca<='Z') || ('a'<=ca && ca<='z') )
        {
          if('a'<=ca && ca<='z')ca-='a'-'A';
          ia[ca-'A']++;
        }
    }
    int ib=ia[0];
    for(int i=1;i<26;i++)
      if(ib<ia[i])ib=ia[i];
    for(int i=ib;i>0;i--)
      for(int j=0;j<26;j++)
        if(ia[j]==i)cout<<(char)('A'+j)<<' '<<ia[j]<<endl;
  }
}
