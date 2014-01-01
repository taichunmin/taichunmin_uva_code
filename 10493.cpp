#include<iostream>
using namespace std;

int main()
{
  int a,b;
  while(cin>>a>>b)
  {
    if(a==0)break;
    cout<<a<<' '<<b<<' ';
    if(a==1 && b==1)
    {
      cout<<"Multiple"<<endl;
      continue;
    }
    if(a<2 || (b-1)%(a-1)!=0)
    {
      cout<<"Impossible"<<endl;
      continue;
    }
    cout<<(b-1)/(a-1)*a+1<<endl;
  }
}
