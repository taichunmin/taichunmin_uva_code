#include<iostream>
using namespace std;

int main()
{
    long long a,b,c;
    int t1;
    cin>>t1;
    for(int i=0;i<t1;i++)
    {
        cin>>a>>b;
        if(a%b==0)c=b/2;
        else c=a-(a/b*b);
        cout<<(a/b==0?0:(b-c))<<' '<<(a/b==-1?0:c)<<endl;
    }
}
