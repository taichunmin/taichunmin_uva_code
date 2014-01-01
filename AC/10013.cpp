#include<iostream>
using namespace std;

int main()
{
    int d;
    cin>>d;
    for(int i=0;i<d;i++)
    {
        int t,q;
        cin>>t;
        int a1,a2,s=t;
        char bb[1000001];
        for(int j=s-1;j>-1;j--)
        {
            cin>>a1>>a2;
            bb[j]=a1+a2;
        }
        for(int j=0;j<s;j++)
        {
            if(j==s-1 && bb[j]>9)s++;
            bb[j+1]+=bb[j]/10;
            bb[j]%=10;
        }
        for(int j=s-1;j>-1;j--)cout<<int(bb[j]);
        cout<<endl;
        if(i+1<d)cout<<endl;
        a1=a2=t=s=0;
        for(int j=0;j<s+1;j++)
        bb[j]=0; 
    }
    system("pause");
}
