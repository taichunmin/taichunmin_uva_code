#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    char aa[13];
    for(int i=0;i<t;i++)
    {
      long long a,b;
      char space,ch;
      cin>>hex>>a>>space>>ch>>space>>b;
      cout<<' '<<ch<<' '<<b<<" = ";
      if(ch=='+')cout<<dec<<a+b;
      if(ch=='-')cout<<dec<<a-b;
    }
    system("pause");
}
