#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[500];
    while(cin.getline(a,500))
    {        
        unsigned int i=strlen(a);
        for(int j=0;j<i;j++)
        {
            a[j]-=7;
            cout<<a[j];
        }
        cout<<endl;
    }
    system("pause");
}
