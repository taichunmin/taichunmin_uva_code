#include<iostream>
using namespace std;

int main()
{
    int t,q,res,a,b,c=0;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>q;
        cin>>a>>b;
        res=a-b;
        c=0;
        for(int j=1;j<q;j++)
        {
            cin>>a>>b;
            if(a-b!=res)c++;
        }
        if(c==0)cout<<"yes\n";
        else cout<<"no\n";
        if(i<(t-1))cout<<endl;
    }
    system("pause");
}
