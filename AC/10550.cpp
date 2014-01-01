#include<iostream>
#define round 1080
using namespace std;
int deg=round;

void aa(int n,int m)
{
    if(m-n>=0)deg+=(m-n)*9;
    if(m-n<0)deg+=(m+40-n)*9;
}

int main()
{
    int a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        if(a==0 && b==0 && c==0 && d==0)break;
        aa(b,a);
        aa(b,c);
        aa(d,c);
        cout<<deg<<endl;
        deg=round;
    }
system("pause");
}
