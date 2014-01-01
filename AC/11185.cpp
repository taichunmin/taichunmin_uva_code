#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
      if(n<0)break;
      if(n==0)
      {
        cout<<'0'<<endl;
        continue;
      }
      char aa[30];
      int i=0;
      while(n>0)
      {
        aa[i]=n%3+'0';
        n/=3;
        i++;
      }
      aa[i]=0;
      int strl=strlen(aa);
      for(int j=strl-1;j>-1;j--)cout<<aa[j];
      cout<<endl;
    }
}
