#include<iostream>
using namespace std;

int main()
{
    long long aa[51]={1,2};
    for(int i=2;i<51;i++)aa[i]=aa[i-1]+aa[i-2];
    int t1;
    cin>>t1;
    for(int t=0;t<t1;t++)
    {
      int s;
      cin>>s;
      cout<<"Scenario #"<<t+1<<":"<<endl;
      cout<<aa[s]<<endl<<endl;
    }
}
