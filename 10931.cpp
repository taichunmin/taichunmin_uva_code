#include<iostream>
using namespace std;

int main()
{
    int n;
    while(cin>>n && n!=0)
    {
      int count=0,i=0;;
      char aa[100]={};
      while(n>0)
      {
        aa[i]=(n%2)+'0';
        if(n%2==1)count++;
        n/=2;
        i++;
      }
      cout<<"The parity of ";
      int strl=strlen(aa);
      for(int j=strl-1;j>-1;j--)cout<<aa[j];
      cout<<" is "<<count<<" (mod 2)."<<endl;
    }
}
