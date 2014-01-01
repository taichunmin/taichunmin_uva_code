//d275: 11586 - Train Tracks
#include<iostream>
#include<sstream>
using namespace std;

void fa(string& sa,string& sb)
{
  for(int i=0;2*i+1<sb.size();)
    if(sa[0]+sb[2*i+1]=='M'+'F')
    {
      sa[0]=sb[2*i];
      sb.erase(2*i);
      sb.erase(2*i);
      return fa(sa,sb);
    }
    else if(sa[1]+sb[2*i]=='M'+'F')
    {
      sa[1]=sb[2*i+1];
      sb.erase(2*i);
      sb.erase(2*i);
      return fa(sa,sb);
    }
    else i++;
}

int main()
{
  string sa,sb;
  istringstream ssin;
  int ta;
  cin>>ta;
  cin.get();
  for(int ti=0;ti<ta;ti++)
  {
    getline(cin,sa);
    if(sa.size()==2)
    {
      cout<<"NO LOOP"<<endl;
      continue;
    }
    //if(ti==4)cout<<sa<<' ';
    ssin.str(sa);
    ssin.clear();
    sb="";
    while(ssin>>sa)
    {
      fa(sa,sb);
      sb+=sa;
    }
    if(sb.size()==2 && sb[0]+sb[1]=='M'+'F')cout<<"LOOP"<<endl;
    else cout<<"NO LOOP"<<endl;
  }
  //system("pause");
}
