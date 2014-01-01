#include<iostream>
using namespace std;

int main()
{
    int a1[10000];
    short count=0,aa;
    while(cin>>a1[count])
    {
        count++;
        
        if(count>1)
        {
            for(int i=0;i<(count-1);i++)
                if(a1[i]<a1[count-1])
                {
                    int s=a1[count-1];
                    for(int j=(count-2);j>(i-1);j--)
                        a1[j+1]=a1[j];
                        a1[i]=s;
                        break; 
                }
        }      
        
        if(count%2==1)
        {
            aa=(count+1)/2;
            cout<<a1[aa-1]<<'\n';
        }
        
        if(count%2==0)
        {
            aa=count/2;
            cout<<(a1[aa-1]+a1[aa])/2<<'\n';
        }
    }
    system("pause");
}
