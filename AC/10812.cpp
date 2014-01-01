#include<iostream>
using namespace std;

int main()
{
    int s,d,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>s>>d;
        if((s-d)<0 || (s+d)%2 || (s-d)%2) 
            {
                 cout<<"impossible\n"; 
                 continue;
            }
        cout<<(s+d)/2<<" ";
        cout<<(s-d)/2<<endl;
    }
    system("pause");
}