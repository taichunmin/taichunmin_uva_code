//d306: 10193 - All You Need Is Love
#include<iostream>
using namespace std;

int main()
{
  int ta;
  string sa,sb;
  long long la,lb;
  cin>>ta;
  for(int t1=0;t1<ta;t1++)
  {
    cin>>sa>>sb;
    la=lb=0;
    for(int i=0;i<sa.size();i++)
    {
      la*=2;
      la+=sa[i]-'0';
    }
    for(int i=0;i<sb.size();i++)
    {
      lb*=2;
      lb+=sb[i]-'0';
    }
    while(lb>0)
    {
      la%=lb;
      la^=lb^=la^=lb;
    }
    if(la>1)cout<<"Pair #"<<t1+1<<": All you need is love!"<<endl;
    else cout<<"Pair #"<<t1+1<<": Love is not all you need!"<<endl;
  }
}
