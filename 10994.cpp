#include <iostream>
#include <string>
using namespace std;

int fna(int a,int b)
{
    int sum=0;
    if(a<0)a=0;
    if(b<0)b=0;
    if(a==0 && b==0)return 0;
    if(a/10!=b/10)
    {
        if(a%10)
        {
            for(int i=a%10;i<10;i++)sum+=i;
            a+=(10-(a%10));
        }
        if(b%10)
        {
            for(int i=b%10;i>0;i--)sum+=i;
            b-=(b%10);
        }
        sum+=(b-a)/2*9;
        return sum + fna(a/10,b/10) ;
    }
    else 
    {
        a%=10;
        b%=10;
        return (b+a)*(b-a+1)/2;
    }
}
int main()
{
    int ia,ib;
    while(cin>>ia>>ib && ia!=-1 && ib!=-1)
        cout<<fna(ia,ib)<<endl;
}

