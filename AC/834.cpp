#include<iostream>
using namespace std;

int main()
{
    int aa[100];
    int a1,b1;
    while(cin>>a1>>b1)
    {
      aa[0]=a1/b1;
      int i=0;
      a1%=b1;
      while(a1!=0)
      {
        int temp=a1;
        a1=b1;
        b1=temp;
        aa[++i]=(int)a1/b1;
        a1%=b1;
      }
      cout<<'['<<aa[0]<<';';
      for(int j=1;j<i+1;j++)
      {
        cout<<aa[j];
        if(j<i)cout<<',';
        if(j==i)cout<<']'<<endl;
      }
    }
    system("pause");
}
