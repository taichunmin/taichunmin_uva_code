#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long k=7,n=0;
    for(int t=0;t<10;t++)
    {
      while(1)
      {
        k+=2;
        long long k1=k*(k+1)/2;
        n=(long long)sqrt(k1);
        long long n1=n*n;
        if(n1==k1)
        {
          cout.width(10);
          cout<<n;
          cout.width(10);
          cout<<k<<endl;
          k++;
          break;
        }
      }
    }
}
/*
         6         8
        35        49
       204       288
      1189      1681
      6930      9800
     40391     57121
    235416    332928
   1372105   1940449
   7997214  11309768
  46611179  65918161
*/
