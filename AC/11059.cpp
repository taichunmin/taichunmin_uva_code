#include<iostream>
using namespace std;

int main()
{
  long long t=0,g,a[18],max,cc;
  while(cin>>g)
  {
      t++;
      for(int i=0;i<g;i++) cin>>a[i];
      max=a[0];
      for(int i=0;i<g;i++)
      {
        cc=1;
        for(int j=i;j<g;j++)
        {
          cc*=a[j];
          if(cc>max)max=cc;
        }
      }  
      if(max<0)max=0;
      if(g)cout<<"Case #"<<t<<": The maximum product is "<<max<<".\n\n";        
  }
system("pause");
}
    
