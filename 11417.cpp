//d255: 11417 - GCD
#include<iostream>
using namespace std;

inline long long gcd(int a,int b)
{
  while(b>0)
  {
    a%=b;
    a^=b^=a^=b;
  }
  return a;
}

int na[500][500];

int main()
{
  for(int i=1;i<500;i++)
      for(int j=i+1;j<=500;j++)
          na[i-1][j-1]=gcd(i,j);
  long long n,g;
  while(cin>>n,n)
  {
    g=0;
    for(int i=1;i<n;i++)
      for(int j=i+1;j<=n;j++)
          g+=na[i-1][j-1];
    cout<<g<<endl;
  }
  //system("pause");
}
