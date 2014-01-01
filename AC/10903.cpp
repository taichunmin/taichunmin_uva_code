#include<iostream>
using namespace std;
int main()
{
  cout.precision(3);
  cout.setf(ios::fixed,ios::floatfield);
  long long n,k;
  bool first=true;
  while(cin>>n && n!=0 && cin>>k)
  {
    if(!first)cout<<endl;
    else first=false;
    double x[n+1],y[n+1];
    for(int i=0;i<n+1;i++){y[i]=0; x[i]=0;}
    int a,b; char c[10],d[10];
    for(int i=1;i<=(n*(n-1)/2)*k;i++)
    {
      cin>>a>>c>>b>>d;
      if(c[0]=='r' && d[0]=='s'){y[a]++; y[b]++; x[a]++;}
      else if(c[0]=='r' && d[0]=='p'){y[a]++,y[b]++,x[b]++;}
      else if(c[0]=='s' && d[0]=='p'){y[a]++,y[b]++,x[a]++;}
      else if(c[0]=='s' && d[0]=='r'){y[a]++,y[b]++,x[b]++;}
      else if(c[0]=='p' && d[0]=='r'){y[a]++,y[b]++,x[a]++;}
      else if(c[0]=='p' && d[0]=='s'){y[a]++,y[b]++,x[b]++;}
    }
    for(int i=1;i<=n;i++)
    {
      if(y[i]==0)cout<<"-"<<endl;
      else cout<<x[i]/y[i]<<endl;
    }
  }
}
