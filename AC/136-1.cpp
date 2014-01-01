#include<iostream>
using namespace std;

int main()
{
    long double a,b;
    while(cin>>b)
    {
      if(b==0)break;
      long long a1=(long long)(b/2);
      long long b1=(long long)(b/3);
      long long c1=(long long)(b/5);
      long long ab=(long long)(b/6);
      long long bc=(long long)(b/15);
      long long ac=(long long)(b/10);
      long long abc=(long long)(b/30);
      cout.precision(0);
      cout<<a1+b1+c1-ab-bc-ac+abc+1<<endl;    
    }
    system("pause");
}
