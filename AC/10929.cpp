/*acm#10929 À¹§¡¥Á*/
#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    char a[1001];
    while(cin.getline(a,1001))
    {
        int b=strlen(a);
        bool c=0;
        for(int i=0;i<b;i+=1)
          if(a[i]!='0')
          {
            c=1;
            break;
          }
        if(c==0)break;
        long long sum1=0,sum2=0;
        for(int i=0;i<b;i+=2)
          sum1+=(a[i]-48);
        for(int i=1;i<b;i+=2)
          sum2+=(a[i]-48);
        if(((sum1>sum2)?(sum1-sum2):(sum2-sum1))%11==0)
          cout<<a<<" is a multiple of 11.\n";
        else
          cout<<a<<" is not a multiple of 11.\n";
    }
    system("pause");
}
