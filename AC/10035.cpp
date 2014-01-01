#include<iostream>
using namespace std;

int main()
{
    long long a,b;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)break;
        int count=0;
        
        bool n=0;
        while(a>0 || b>0)
        {
          if((a%10+b%10)+n>9)
          {
            count++;
            n=1;
          }
          else n=0;
          a/=10;
          b/=10;
        }
        
        if(count==0)cout<<"No carry operation.\n";
        else if(count>1)cout<<count<<" carry operations.\n";
        else if(count==1)cout<<"1 carry operation.\n";
    }
}
            
