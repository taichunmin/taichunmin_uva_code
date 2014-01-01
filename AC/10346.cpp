#include<iostream>
using namespace std;

int main()
{
    int n,k,i=0,s=0,t=0;
    while(cin>>n>>k)
    {
    if(k<2) break;
    t=0;i=n;t+=i;
    do{
       s=i/k;
       t+=s;
       i=s+(i%k);
      }while(s!=0);
    cout<<t<<endl;
    }      
system("pause");
}
    
