//d267: 11577 - Letter Frequency
#include<iostream>
using namespace std;

int main()
{
  string sa;
  int ta,ia;
  cin>>ta;
  cin.get();
  for(int t1=0;t1<ta;t1++)
  {
    int na[26]={};
    ia=0;
    getline(cin,sa);
    for(int i=0;i<sa.size();i++)
      if(sa[i]>='a' && sa[i]<='z')na[sa[i]-'a']++;
      else if(sa[i]>='A' && sa[i]<='Z')na[sa[i]-'A']++;
    for(int i=0;i<26;i++)
      if(na[i]>ia)ia=na[i];
    for(int i=0;i<26;i++)
      if(na[i]==ia)cout<<(char)(i+'a');
    cout<<endl;
  }
}
