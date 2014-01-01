#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    for(long long i=0;i<t;i++)
    {
        long long a1,a2,total;
        cin>>a1>>a2;
        long long c=a2-a1;
        if(c==0)
        {
          cout<<'0'<<endl;
          continue;
        }
        int a,b;
        a=int(sqrt(c));
        if(c>a*(a+1))a++;
        b=(c>a*a)?1:0;
        total=2*a-1+b;
        cout<<total<<endl;
    }
    system("pause");
}
