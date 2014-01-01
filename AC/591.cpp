#include<iostream>
using namespace std;

int main()
{
    int a,c=0,d=0,e=0;
    while(cin>>a)
    {
        if(a==0) break;
        int b[50];
        for(int i=0;i<a;i++)
        {
            cin>>b[i];
            c+=b[i];
        }
        c/=a;
        for(int i=0;i<a;i++)
            if(b[i]<c) d+=(c-b[i]);
        e++;
        cout<<"Set #"<<e<<endl
            <<"The minimum number of moves is "<<d<<".\n\n";
        d=0;c=0;
    }    
//system("pause");
}
