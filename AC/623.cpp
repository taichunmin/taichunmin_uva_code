#include<iostream>
using namespace std;

string fa(string sa, int ia)
{
  string sb ;
  sb.assign(sa.size(),'0');
  int ib=0,ic;
  while(ia>0)
  {
    for(int i=0;i<sa.size();i++)
    {
      ic=(sa[i]-'0')*(ia%10);
      if(i+ib+(ic>9)>sb.size()-1)sb.append(i+ib+(ic>9)+1-sb.size(),'0');
      sb[i+ib+1]+=ic/10;
      sb[i+ib]+=ic%10;
    }
    for(int i=0;i<sb.size();i++)
    {
      if(sb[i]>'9')
      {
        if(i+(sb[i]-'0'>9)>sb.size()-1)sb.append(i+(sb[i]-'0'>9)+1-sb.size(),'0');
        sb[i+1]+=(sb[i]-'0')/10;
        sb[i]=(sb[i]-'0')%10+'0';
      }
    }
    ia/=10;
    ib++;
  }
  return sb;
}

string fb(string sa)
{
  for(int i=0;i<sa.size()/2;i++)
    swap(sa[i],sa[sa.size()-i-1]);
  return sa;
}

int main()
{
  string sa[1001]={"1","1"};
  int ia;
  for(int i=2;i<=1000;i++)
    sa[i]=fa(sa[i-1],i);
  while(cin>>ia)
    cout<<ia<<"!\n"<<fb(sa[ia])<<endl;
  //system("pause");
}
